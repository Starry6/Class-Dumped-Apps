@interface SFAirDropTransferChange : NSObject
@property (nonatomic) NSUUID proxyIdentifier;
@property (nonatomic) double progress;
@property (nonatomic) SFProxyText displayName;
@property (nonatomic) SFProxyText status;
@property (nonatomic) q state;
- (id)initWithCoder:;
- (id)displayName;
- (double)progress;
- (void)encodeWithCoder:;
- (long long)state;
- (void).cxx_destruct;
- (id)status;
- (id)proxyIdentifier;
- (id)initWithProxyIdentifier:progress:displayName:status:state:;
+ (BOOL)supportsSecureCoding;
@end
