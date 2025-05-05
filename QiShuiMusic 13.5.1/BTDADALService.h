@interface BTDADALService : NSObject
@property (nonatomic) BTDPokettoMonitor monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventV3:params:isDoubleSending:;
- (BOOL)trackAdEvent:tag:extra:adExtra:;
- (void)eventData:;
- (void)monitorService:value:category:extra:;
- (id)ntType;
- (void)performanceEventV3:params:;
- (void)requestWithResponse:params:callback:;
- (id)sdkAppId;
- (void)sendReqToWXWithUserName:path:customScene:callback:;
- (id)init;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)sdkVersion;
+ (id)appLinkProtocolImp;
+ (id)protocolImp;
+ (id)sharedInstance;
+ (id)appid;
@end
