@interface BDASplashModelCache : NSObject
+ (BOOL)timeIntervalIsLessOrEqualToday:;
+ (void)clearAllModels;
+ (void)clearFirstLaunchModels;
+ (id)getAllSplashModels;
+ (id)getFirstLaunchSplashModels;
+ (id)getModelsWithKey:;
+ (BOOL)shouldBeStopOnTimeIntervals:model:;
+ (void)updateLocalFirstLaunchModelsWithSplashModels:;
+ (void)updateSplashModels:;
+ (void)updateStopSplashWithAdIds:;
+ (void)updateStopSplashWithModel:method:;
@end
