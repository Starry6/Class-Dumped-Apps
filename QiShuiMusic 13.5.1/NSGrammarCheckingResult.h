@interface NSGrammarCheckingResult : NSTextCheckingResult
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:;
- (id)resultByAdjustingRangesWithOffset:;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (id)range;
- (void)encodeWithCoder:;
- (id)grammarDetails;
- (id)initWithRange:details:;
+ (BOOL)supportsSecureCoding;
@end
