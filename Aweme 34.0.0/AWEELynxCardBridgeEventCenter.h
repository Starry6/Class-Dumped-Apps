@interface AWEELynxCardBridgeEventCenter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)publishEventWithEventName:params:listContextId:;
+ (void)publishEventWithEventName:params:isGlobal:listContextId:;
+ (void)publishEventWithEventName:params:eventID:isBroadcast:;
+ (void)publishEventWithEventName:params:isBroadcast:;
@end
