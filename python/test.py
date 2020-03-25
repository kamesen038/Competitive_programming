def add(a, b):
    return a + b
import unittest

class TestNotebook(unittest.TestCase):

    def test_add(self):
        self.assertEqual(add(2, 2), 4)

if __name__ == "__main__":
    unittest.main()