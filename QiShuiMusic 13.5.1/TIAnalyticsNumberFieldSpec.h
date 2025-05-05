@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec
@property (nonatomic) BOOL isInteger;
@property (nonatomic) NSNumber minValue;
@property (nonatomic) NSNumber maxValue;
@property (nonatomic) NSNumber significantDigits;
- (id)initWithName:isInteger:minValue:maxValue:significantDigits:;
- (BOOL)validate:error:;
- (id)maxValue;
- (id)minValue;
- (BOOL)isInteger;
- (void).cxx_destruct;
- (id)significantDigits;
@end
