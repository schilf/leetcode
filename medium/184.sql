SELECT 
    d.Name Department, e.Name Employee, e.Salary Salary
FROM
    Employee e,
    (SELECT 
        MAX(Salary) maxSalary, DepartmentId
    FROM
        Employee
    GROUP BY DepartmentId) t,
    Department d
WHERE
    d.Id = e.DepartmentId
        AND e.Salary = t.maxSalary
        AND d.Id = t.DepartmentId;
