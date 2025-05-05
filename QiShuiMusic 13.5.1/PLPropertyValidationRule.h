@interface PLPropertyValidationRule : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString keyPath;
@property (nonatomic) <NSObject> expectedValue;
@property (nonatomic) <NSObject> expectedValueRangeLow;
@property (nonatomic) <NSObject> expectedValueRangeHigh;
@property (nonatomic) NSArray expectedValues;
- (id)keyPaths;
- (void)setType:;
- (id)predicate;
- (void)setKeyPath:;
- (long long)type;
- (id)keyPath;
- (void).cxx_destruct;
- (id)currentValuesOfObject:;
- (id)reverseRule;
- (BOOL)evaluateWithObject:outMessage:;
- (id)descriptionOfCurrentValuesOfObject:;
- (id)expectedValue;
- (void)setExpectedValue:;
- (id)expectedValueRangeLow;
- (void)setExpectedValueRangeLow:;
- (id)expectedValueRangeHigh;
- (void)setExpectedValueRangeHigh:;
- (id)expectedValues;
- (void)setExpectedValues:;
@end
