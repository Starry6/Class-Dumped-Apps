@interface BDLynxBridgeListenerManager : NSObject
+ (id)bridgeListeners;
+ (void)notifyWillHandleMethod:message:;
+ (void)addBridgeListener:;
+ (void)callBridgeListenersWithSel:bridge:message:;
+ (void)notifyDidCallEvent:message:;
+ (void)notifyDidCallback:message:;
+ (void)notifyDidHandleMethod:message:;
+ (void)notifyWillCallEvent:message:;
+ (void)notifyWillCallback:message:;
@end
