@interface AWEOFGJSBridgeManager : NSObject
- (BOOL)handleIESBridgeWithContextInfo:;
- (BOOL)handleTTBridgeWithContextInfo:;
- (BOOL)handleMessage:exector:resultHandler:;
- (id)responseHandlerWithContextInfo:;
+ (id)sharedManager;
@end
