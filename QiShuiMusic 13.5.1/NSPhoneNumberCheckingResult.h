@interface NSPhoneNumberCheckingResult : NSTextCheckingResult
@property (nonatomic) ^v underlyingResult;
- (void)dealloc;
- (id)phoneNumber;
- (BOOL)_adjustRangesWithOffset:;
- (id)resultByAdjustingRangesWithOffset:;
- (id)initWithCoder:;
- (unsigned long long)resultType;
- (id)range;
- (void)encodeWithCoder:;
- (id)description;
- (id)underlyingResult;
- (id)initWithRange:phoneNumber:underlyingResult:;
- (id)initWithRange:phoneNumber:;
+ (BOOL)supportsSecureCoding;
@end
