@interface TTRexxarWebViewAdapter : NSObject
+ (void)fireEvent:data:engine:;
+ (BOOL)handleBridgeRequest:engine:;
@end
