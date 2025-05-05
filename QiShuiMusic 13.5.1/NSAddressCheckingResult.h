@interface NSAddressCheckingResult : NSTextCheckingResult
@property (nonatomic) ^v underlyingResult;
- (id)components;
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:;
- (id)resultByAdjustingRangesWithOffset:;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (id)range;
- (void)encodeWithCoder:;
- (id)underlyingResult;
- (id)initWithRange:components:underlyingResult:;
- (id)initWithRange:components:;
+ (BOOL)supportsSecureCoding;
@end
