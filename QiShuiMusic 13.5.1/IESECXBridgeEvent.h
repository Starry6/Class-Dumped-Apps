@interface IESECXBridgeEvent : NSObject
+ (BOOL)publishEventWithName:params:;
+ (id)subscribeEventNamed:callback:;
+ (void)unsubscribe:;
@end
