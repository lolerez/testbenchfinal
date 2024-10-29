from setuptools import find_packages
from setuptools import setup

setup(
    name='motor_controller',
    version='0.0.1',
    packages=find_packages(
        include=('motor_controller', 'motor_controller.*')),
)
