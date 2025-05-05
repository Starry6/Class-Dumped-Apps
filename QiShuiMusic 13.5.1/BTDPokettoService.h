@interface BTDPokettoService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventV3:params:isDoubleSending:;
- (void)eventData:;
- (void)monitorService:value:category:extra:;
- (id)ntType;
- (void)performanceEventV3:params:;
- (id)init;
+ (id)protocolImp;
+ (id)sharedInstance;
+ (id)sdkVersion;
+ (id)appid;
@end
