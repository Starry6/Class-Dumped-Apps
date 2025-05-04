@interface AWELandscapeResolutionConfig : NSObject
+ (id)resolutionConfig;
+ (long long)blockMaxCount;
+ (long long)blockMaxTime;
+ (BOOL)enableChangeResolutionForConfigWithEnterFrom:;
+ (id)resolutionWithManualGearTypes:;
+ (BOOL)enableChangeResolutionWithEnterFrom:model:;
+ (unsigned long long)cachedGearTypeWithEnterFrom:model:;
+ (void)updateCachedGearType:enterFrom:model:;
+ (id)numberWithGearTypes:;
+ (id)numberWithReminderState:;
@end
