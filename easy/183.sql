SELECT 
    name Customers
FROM
    Customers
        LEFT JOIN
    Orders ON Orders.CustomerId = Customers.Id
WHERE
    Orders.Id IS NULL;
