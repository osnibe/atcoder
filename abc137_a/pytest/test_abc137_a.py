from abc137_a import max_number

def test_max_number():
    assert max_number(-13, 3) == -10
    assert max_number(1, -33) == 34
    assert max_number(13, 3) == 39