@interface BDUGLuckyDogCommonUtils : NSObject
- (void)__onAppWillResignActive;
- (void)dealloc;
+ (void)addTrackerCommonParams;
+ (BOOL)isColdStart;
+ (BOOL)isFirstStart;
+ (void)preStartup;
+ (id)secUserID;
+ (id)tomorrowMidnight;
+ (void)vibrateWithStyle:;
+ (id)sharedInstance;
@end
