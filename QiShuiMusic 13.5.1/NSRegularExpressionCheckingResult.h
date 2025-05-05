@interface NSRegularExpressionCheckingResult : NSTextCheckingResult
@property (nonatomic) NSRegularExpression regularExpression;
@property (nonatomic) NSArray rangeArray;
- (id)initWithRanges:count:regularExpression:;
- (id)resultByAdjustingRangesWithOffset:;
- (id)rangeWithName:;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (id)regularExpression;
- (void)encodeWithCoder:;
- (id)rangeArray;
- (id)initWithRangeArray:regularExpression:;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
