@interface AWELiveGlobalBridgeEventUtil : NSObject
+ (BOOL)publishEventWithName:params:;
+ (id)subscribeEventNamed:callback:;
+ (void)unsubscribe:;
@end
