@interface NSLinkCheckingResult : NSTextCheckingResult
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:;
- (id)resultByAdjustingRangesWithOffset:;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (id)range;
- (void)encodeWithCoder:;
- (id)description;
- (id)URL;
- (id)initWithRange:URL:;
+ (BOOL)supportsSecureCoding;
@end
