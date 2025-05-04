@interface AWEPluginXBridgeEventImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)subscribeEventOnce:withCallback:;
- (id)bdp_subscribeEventName:withCallback:;
- (BOOL)bdp_unsubscribeEventName:subscriber:;
+ (id)sharedPlugin;
@end
