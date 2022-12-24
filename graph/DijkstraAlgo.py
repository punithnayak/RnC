import heapq

def dijkstra(graph, start, end):
    distances = {node: float("inf") for node in graph}
    distances[start] = 0
    heap = []
    heapq.heappush(heap, (0, start))


    while heap:
        distance, node = heapq.heappop(heap)
        if node == end:
            return distance
        if distance > distances[node]:
            continue
        for neighbor, weight in graph[node].items():
            new_distance = distance + weight
            if new_distance < distances[neighbor]:
                distances[neighbor] = new_distance
                heapq.heappush(heap, (new_distance, neighbor))

    return distances[end]


graph = {
    "A": {"B": 2, "C": 3},
    "B": {"A": 2, "C": 1, "D": 2},
    "C": {"A": 3, "B": 1, "D": 3, "E": 1},
    "D": {"B": 2, "C": 3, "E": 2},
    "E": {"C": 1, "D": 2},
}

print(dijkstra(graph, "A", "E"))