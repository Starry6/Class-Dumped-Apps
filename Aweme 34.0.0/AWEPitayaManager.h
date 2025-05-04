@interface AWEPitayaManager : NSObject
- (void)bytedSettingDidChange;
- (void)initCepEngine;
- (id)init;
- (BOOL)checkVersion;
- (void)start;
+ (BOOL)enablePitaya;
+ (id)sharedInstance;
@end
