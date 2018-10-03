# d30act
* Date difference in years according to the **30/Actual** daycount method
* Synonyms: 30/Actual


## ISO 20022 -- A003

    "Method whereby interest is calculated based on a 30-day month in a way similar to the 30/360 (basic rule) and the assumed number of days in a year in a way similar to the Actual/Actual (ICMA). Accrued interest to a value date on the last day of a month shall be the same as to the 30th calendar day of the same month, except for February. This means that a 31st is assumed to be a 30th and the 28 Feb (or 29 Feb for a leap year) is assumed to be a 28th (or 29th). The assumed number of days in a year is computed as the actual number of days in the coupon period multiplied by the number of interest payments in the year."

[link](https://www.iso20022.org/15022/uhb/mt565-16-field-22f.htm)


### Installation
```
clib install hcnn/d30act
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/d30act": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/d30act/blob/master/test.c) and [demo.c](https://github.com/hcnn/d30act/blob/master/demo.c)

```
git clone git@github.com:hcnn/d30act.git
cd d30act
make deps
make validate
make showcase
```
