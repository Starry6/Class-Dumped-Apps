@interface NSSubstitutionCheckingResult : NSTextCheckingResult
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:;
- (id)resultByAdjustingRangesWithOffset:;
- (id)initWithCoder:;
- (id)range;
- (void)encodeWithCoder:;
- (id)description;
- (id)replacementString;
- (id)initWithRange:replacementString:;
+ (BOOL)supportsSecureCoding;
@end
