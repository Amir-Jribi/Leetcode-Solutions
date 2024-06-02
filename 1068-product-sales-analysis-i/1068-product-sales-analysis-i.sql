# Write your MySQL query statement below

SELECT t.product_name,s.year,s.price
FROM Sales as s
JOIN Product as t
ON s.product_id=t.product_id