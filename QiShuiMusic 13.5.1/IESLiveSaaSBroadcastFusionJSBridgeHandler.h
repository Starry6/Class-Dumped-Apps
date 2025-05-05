@interface IESLiveSaaSBroadcastFusionJSBridgeHandler : NSObject
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerHandlerWithBridge:;
- (void)requestAuthForDouyin:scopeString:callback:;
+ (id)getAppNameWithTarget:;
@end
