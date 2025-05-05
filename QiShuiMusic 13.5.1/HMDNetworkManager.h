@interface HMDNetworkManager : NSObject
@property (nonatomic) <HMDNetworkProtocol> ttnetManager;
@property (nonatomic) <HMDNetworkProtocol> urlsessionManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)asyncRequestWithModel:callback:;
- (void)asyncRequestWithModel:callBackWithResponse:;
- (void)handleRequestModel:;
- (void)logMemoryWithModel:;
- (void)setTtnetManager:;
- (void)setUrlsessionManager:;
- (id)ttnetManager;
- (void)uploadWithModel:callBackWithResponse:;
- (void)uploadWithModel:callback:;
- (id)urlsessionManager;
- (id)validManager;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)sharedInstance;
@end
