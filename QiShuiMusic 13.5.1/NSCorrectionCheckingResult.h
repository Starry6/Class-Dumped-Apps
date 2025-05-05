@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult
- (void)dealloc;
- (id)resultByAdjustingRangesWithOffset:;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (void)encodeWithCoder:;
- (id)description;
- (id)alternativeStrings;
- (id)initWithRange:replacementString:alternativeStrings:;
+ (BOOL)supportsSecureCoding;
@end
