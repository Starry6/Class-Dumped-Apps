@interface AWEMemoryTrack : NSObject
- (void)dealloc;
+ (void)didReceiveMemeoryDangerLevelTopNotification;
+ (void)_aweLazyRegisterStaticLoad;
+ (void)didReceiveSystemMemoryWarningNotification;
+ (id)config;
+ (BOOL)isEnabled;
+ (void)addObservers;
@end
