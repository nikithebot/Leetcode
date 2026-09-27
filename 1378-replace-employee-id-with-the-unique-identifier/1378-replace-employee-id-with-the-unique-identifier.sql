# Write your MySQL query statement below
-- This only works for inner join... for left join we have to use subquery!...
-- SELECT ee.unique_id, e.name
-- FROM Employees e, EmployeeUNI ee
-- WHERE e.id = ee.id;


SELECT ee.unique_id, e.name
FROM Employees e LEFT JOIN EmployeeUNI ee
ON e.id = ee.id;