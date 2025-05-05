@interface IESBridgeMonitor : NSObject
+ (id)authStringWithType:;
+ (void)monitorJSBInvokeEventWithBridgeMessage:bridgeMethod:url:isAuthorized:;
@end
