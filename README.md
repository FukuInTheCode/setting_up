# Setting Up

## Module: B-CPE-110 (Grade: A)

## Project Description
 Find the biggest square in a map fill with space and obstacle in C

### USAGE
 ./setting_up [file | map_size pattern]
# Result: 100% (Mark: 20)
<details>
<summary>Click to expand test results</summary>

### Algorithm app. - Generating column (100% Passed)
| Test | Status |
| --- | --- |
| Column with 25% obstruction | PASSED |
| Column with 50% obstruction | PASSED |
| Column with 75% obstruction | PASSED |

### Algorithm app. - Generating edges (100% Passed)
| Test | Status |
| --- | --- |
| Generating - Square of 20 with edges | PASSED |
| Generating - Square of 20 without edges | PASSED |

### Algorithm app. - Generating line (100% Passed)
| Test | Status |
| --- | --- |
| Line with 25% obstruction | PASSED |
| Line with 50% obstruction | PASSED |
| Line with 75% obstruction | PASSED |

### Algorithm app. - Generating square (100% Passed)
| Test | Status |
| --- | --- |
| Square of with 25% obstruction | PASSED |
| Square of with 50% obstruction | PASSED |
| Square of with 75% obstruction | PASSED |

### Algorithm app. - Opening column (100% Passed)
| Test | Status |
| --- | --- |
| Column with 25% obstruction | PASSED |
| Column with 50% obstruction | PASSED |
| Column with 75% obstruction | PASSED |

### Algorithm app. - Opening edges (100% Passed)
| Test | Status |
| --- | --- |
| Empty edges | PASSED |
| Full edges | PASSED |

### Algorithm app. - Opening line (100% Passed)
| Test | Status |
| --- | --- |
| Line with 25% obstruction | PASSED |
| Line with 50% obstruction | PASSED |
| Line with 75% obstruction | PASSED |

### Algorithm app. - Opening rectangle (100% Passed)
| Test | Status |
| --- | --- |
| Rectangle (34 x 137) with 25% obstruction | PASSED |
| Rectangle (34 x 137) with 50% obstruction | PASSED |
| Rectangle (34 x 137) with 75% obstruction | PASSED |

### Basics (100% Passed)
| Test | Status |
| --- | --- |
| Generating - Square of 14 with 25% obstruction | PASSED |
| Generating - Square of 14 with 50% obstruction | PASSED |
| Generating - Square of 14 with 75% obstruction | PASSED |
| Opening - Rectangle (97 x 21) with 25% obstruction | PASSED |
| Opening - Rectangle (97 x 21) with 50% obstruction | PASSED |
| Opening - Rectangle (97 x 21) with 75% obstruction | PASSED |

### Data structure - Generating (100% Passed)
| Test | Status |
| --- | --- |
| Square of 187 with 25% obstruction | PASSED |
| Square of 187 with 50% obstruction | PASSED |
| Square of 187 with 75% obstruction | PASSED |

### Data structure - Opening (100% Passed)
| Test | Status |
| --- | --- |
| Square (187 x 187) with 25% obstruction | PASSED |
| Square (187 x 187) with 50% obstruction | PASSED |
| Square (187 x 187) with 75% obstruction | PASSED |

### Optimization - Generating 100 to 500 (100% Passed)
| Test | Status |
| --- | --- |
| 100 x 100 | PASSED |
| 200 x 200 | PASSED |
| 500 x 500 | PASSED |
| 500 x 500 #2 | PASSED |

### Optimization - Generating 1000 to 2000 (100% Passed)
| Test | Status |
| --- | --- |
| 1000 x 1000 | PASSED |
| 2000 x 2000 | PASSED |

### Optimization - Generating 5000 to 10000 (100% Passed)
| Test | Status |
| --- | --- |
| 10000 x 10000 | PASSED |
| 5000 x 5000 | PASSED |

### Optimization - Opening 100 to 500 (100% Passed)
| Test | Status |
| --- | --- |
| 100 x 100 | PASSED |
| 200 x 200 | PASSED |
| 500 x 500 | PASSED |
| 500 x 500 #2 | PASSED |

### Optimization - Opening 1000 to 2000 (100% Passed)
| Test | Status |
| --- | --- |
| 1000 x 1000 | PASSED |
| 2000 x 2000 | PASSED |

### Optimization - Opening 5000 to 10000 (100% Passed)
| Test | Status |
| --- | --- |
| 10000 x 10000 | PASSED |
| 5000 x 5000 | PASSED |

### Parsing - Opening (100% Passed)
| Test | Status |
| --- | --- |
| Square (30 x 30) with 25% obstruction | PASSED |
| Square (30 x 30) with 50% obstruction | PASSED |
| Square (30 x 30) with 75% obstruction | PASSED |

### Robustness - Generating empty map (100% Passed)
| Test | Status |
| --- | --- |
| Empty column | PASSED |
| Empty line | PASSED |
| Empty point | PASSED |
| Empty square | PASSED |

### Robustness - Generating filled map (100% Passed)
| Test | Status |
| --- | --- |
| Filled point | PASSED |
| Filled square | PASSED |

### Robustness - Generating valid board (100% Passed)
| Test | Status |
| --- | --- |
| Alpha-numeric size | PASSED |
| Empty pattern | PASSED |
| Invalid arguments number | PASSED |
| Invalid pattern characters | PASSED |
| Negative size | PASSED |

### Robustness - Opening empty map (100% Passed)
| Test | Status |
| --- | --- |
| Empty column | PASSED |
| Empty horizontal rectangle | PASSED |
| Empty line | PASSED |
| Empty point | PASSED |
| Empty square | PASSED |
| Empty vertical rectangle | PASSED |

### Robustness - Opening filled map (100% Passed)
| Test | Status |
| --- | --- |
| Filled column | PASSED |
| Filled horizontal rectangle | PASSED |
| Filled line | PASSED |
| Filled point | PASSED |
| Filled square | PASSED |
| Filled vertical rectangle | PASSED |

### Robustness - Opening valid file (100% Passed)
| Test | Status |
| --- | --- |
| Bad character | PASSED |
| Different line sizes | PASSED |
| Empty map | PASSED |
| Existing file | PASSED |
| Less lines | PASSED |

</details>

## Tests
a bash script that test all the map_file that were given with there solutions and another bash script that test all the possibles maps using the generatio script given and pass it to the program and check if it crash

