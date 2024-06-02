# Write your MySQL query statement below


# SELECT customer_id,COUNT(customer_id) AS count_no_trans
# FROM Visits
# WHERE visit_id NOT IN (
#     SELECT DISTINCT(visit_id)
#     FROM Transactions
# )

SELECT V.customer_id,COUNT(V.customer_id) AS count_no_trans
FROM Visits  V
LEFT JOIN Transactions  T
ON V.visit_id=T.visit_id
WHERE T.transaction_id IS NULL
GROUP BY V.customer_id