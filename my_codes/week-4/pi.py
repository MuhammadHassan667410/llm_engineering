import math

def calculate_pi():
    """
    Calculate the value of π (pi) using the math library function acos.

    This method uses the trigonometric identity that the arccosine of -1 is equal 
    to π radians.

    Returns:
        float: An approximation of the mathematical constant π.

    Example:
        >>> calculate_pi()
        3.141592653589793

    Raises:
        ValueError: If the input to math.acos is not in the domain [-1, 1].
    """
    try:
        pi_value = math.acos(-1)
    except ValueError as error:
        raise ValueError("math.acos received an out-of-domain value: -1") from error

    return pi_value

if __name__ == "__main__":
    pi = calculate_pi()
    print(f"The calculated value of π is: {pi}")