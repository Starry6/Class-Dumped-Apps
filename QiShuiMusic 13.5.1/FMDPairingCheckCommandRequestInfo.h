@interface FMDPairingCheckCommandRequestInfo : NSObject
@property (nonatomic) NSString pairingCheckToken;
@property (nonatomic) NSString authNonce;
@property (nonatomic) NSString accessoryType;
@property (nonatomic) NSString eraseKeyType;
- (id)initWithCoder:;
- (id)accessoryType;
- (void)encodeWithCoder:;
- (void)setAccessoryType:;
- (void).cxx_destruct;
- (id)pairingCheckToken;
- (void)setPairingCheckToken:;
- (id)authNonce;
- (void)setAuthNonce:;
- (id)eraseKeyType;
- (void)setEraseKeyType:;
+ (BOOL)supportsSecureCoding;
@end
