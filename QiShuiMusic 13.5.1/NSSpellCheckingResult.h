@interface NSSpellCheckingResult : NSTextCheckingResult
- (BOOL)_adjustRangesWithOffset:;
- (id)resultByAdjustingRangesWithOffset:;
- (id)initWithCoder:;
- (id)initWithRange:;
- (unsigned long long)resultType;
- (id)range;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
