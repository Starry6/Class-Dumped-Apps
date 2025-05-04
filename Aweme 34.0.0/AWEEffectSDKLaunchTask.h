@interface AWEEffectSDKLaunchTask : NSObject
- (id)aAWEDylibManagerAdapterProtocol;
+ (void)executeEffectSDKTask;
+ (Class)aAWEDylibManagerAdapterProtocolClass;
+ (void)preloadEffectSDK:;
+ (id)sharedInstance;
@end
