@interface SSCoreHapticsInfo : NSObject
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)registerSSID:withPlayer:;
- (void)unregisterSSID:;
- (unsigned long long)generateNewSSIDForPlayer:;
- (id)getPlayerForSSID:;
- (void)disposeSSID:;
+ (id)instance;
@end
