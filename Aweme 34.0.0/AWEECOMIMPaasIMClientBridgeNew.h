@interface AWEECOMIMPaasIMClientBridgeNew : NSObject
@property (nonatomic) BDECPigeonCustomerClient pigeonClient;
@property (nonatomic) double imServerTimestamp;
@property (nonatomic) <AWEECOMIMPaasIMClientConfigProtocol> clientConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)imServerTimestamp;
- (void)setImServerTimestamp:;
- (id)pigeonClient;
- (void)setPigeonClient:;
- (id)clientConfig;
- (void)setClientConfig:;
- (void).cxx_destruct;
+ (id)IMClientBridgeWithPigeonClient:;
@end
