@interface TTAccountTrackerHelper : NSObject
+ (void)trackAuthCallBackEventWithPlatform:requestReason:oneAuth:error:;
+ (void)trackAuthCallBackEventWithPlatform:requestReason:error:;
+ (void)trackEventName:error:;
+ (void)trackEventName:params:;
+ (void)trackEventName:resonse:error:;
+ (void)trackEventName:resonse:error:isLogin:;
+ (void)trackEventName:resonse:error:params:;
+ (void)trackEventName:resonse:error:scene:;
+ (id)trackParamsError:;
+ (id)trackParamsFromResponse:error:;
@end
