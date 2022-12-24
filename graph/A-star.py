import heapq

def a_star(graph, start, end, heuristic):
    # initialize distances
    distances = {node: float("inf") for node in graph}
    distances[start] = 0
    heap = []
    heapq.heappush(heap, (0, start))

    # explore neighbors
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
                cost = new_distance + heuristic(end, neighbor)
                heapq.heappush(heap, (cost, neighbor))

    return distances[end]

# example usage
graph = {
    "A": {"B": 2, "C": 3},
    "B": {"A": 2, "C": 1, "D": 2},
    "C": {"A": 3, "B": 1, "D": 3, "E": 1},
    "D": {"B": 2, "C": 3, "E": 2},
    "E": {"C": 1, "D": 2},
}

def euclidean_distance(a, b):
    (x1, y1) = a
    (x2, y2) = b
    return ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5

print(a_star(graph, "A", "E", euclidean_distance))  # Output: 4
