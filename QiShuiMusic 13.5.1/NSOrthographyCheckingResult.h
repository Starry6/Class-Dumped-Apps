@interface NSOrthographyCheckingResult : NSTextCheckingResult
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:;
- (id)resultByAdjustingRangesWithOffset:;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (id)range;
- (void)encodeWithCoder:;
- (id)description;
- (id)orthography;
- (id)initWithRange:orthography:;
+ (BOOL)supportsSecureCoding;
@end
