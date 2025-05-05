@interface MPSWeightsWrapper_SecureCoding : MPSWeightsWrapper
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
