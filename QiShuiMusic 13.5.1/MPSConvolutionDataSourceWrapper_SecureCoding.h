@interface MPSConvolutionDataSourceWrapper_SecureCoding : MPSConvolutionDataSourceWrapper
- (BOOL)respondsToSelector:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
