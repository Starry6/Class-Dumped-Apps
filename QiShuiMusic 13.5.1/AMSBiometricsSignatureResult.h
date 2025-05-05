@interface AMSBiometricsSignatureResult : NSObject
@property (nonatomic) AMSBiometricsSignatureRequest originalRequest;
@property (nonatomic) NSString signature;
- (void)setSignature:;
- (id)signature;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)originalRequest;
- (void)setOriginalRequest:;
+ (BOOL)supportsSecureCoding;
@end
