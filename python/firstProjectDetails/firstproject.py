import streamlit as st

def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        return "Cannot divide by zero"
    return a / b

def main():
    st.title("My Calculator App")
    st.write("Created using Python and Streamlit")

    num1 = st.number_input("Enter first number", value=0.0)
    num2 = st.number_input("Enter second number", value=0.0)

    choice = st.selectbox("Select Operation", ["Add", "Subtract", "Multiply", "Divide"])

    if st.button("Calculate Result"):
        if choice == "Add":
            result = add(num1, num2)
        elif choice == "Subtract":
            result = subtract(num1, num2)
        elif choice == "Multiply":
            result = multiply(num1, num2)
        elif choice == "Divide":
            result = divide(num1, num2)
        
        st.success(f"Answer: {result}")

if __name__ == "__main__":
    main()