@interface CKOperationGroupSystemImposedInfo : NSObject
@property (nonatomic) NSDictionary networkServiceTypePerConfig;
@property (nonatomic) q expectedSendSize;
@property (nonatomic) q expectedReceiveSize;
- (void)setExpectedSendSize:;
- (id)initWithCoder:;
- (void)setExpectedReceiveSize:;
- (void)setNetworkServiceTypePerConfig:;
- (void)encodeWithCoder:;
- (id)networkServiceTypePerConfig;
- (void).cxx_destruct;
- (long long)expectedSendSize;
- (long long)expectedReceiveSize;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
