@interface AWESearchAIGCDeepSeekStatusManager : NSObject
+ (id)currentAIModeName;
+ (BOOL)enableAISearchDeepMode;
+ (id)deepSeekConfig;
+ (id)settingsPageCurrentDeepSeekMode;
+ (id)settingsPageConfig;
+ (void)fetchAIGCDeepSeekStatus:;
+ (void)updateAIGCDeepSeekStatus:callBack:;
+ (BOOL)searchAIGCModelEnabled;
+ (BOOL)settingsPageEnableDeepSeekMode;
@end
