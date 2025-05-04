@interface AWEPayBridgePlugin_SKM : TTBridgePlugin
- (void)skmSavePayeeCodeToAlbumWithParam:callback:engine:controller:command:;
- (void)skmVoiceBroadcastSwitchWithParam:callback:engine:controller:command:;
- (void)skmGetPayeeCodeInfoWithParam:callback:engine:controller:;
- (void)skmVoiceCheckWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
