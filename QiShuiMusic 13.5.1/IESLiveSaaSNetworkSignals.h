@interface IESLiveSaaSNetworkSignals : NSObject
+ (id)networkReachableShowPromptIfNot;
+ (BOOL)allowPlayNotInWifi;
+ (id)networkReachabilityConsiderLocalSetting;
+ (id)networkReachabilityExcludeViaWWAN:;
+ (id)networkReachable;
@end
