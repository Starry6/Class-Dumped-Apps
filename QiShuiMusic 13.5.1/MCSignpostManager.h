@interface MCSignpostManager : NSObject
+ (void)willPostEffectiveSettingsChangedNotification;
+ (void)willGetFeature:;
+ (id)signpostsForTypeFilter:featureFilter:duration:error:;
+ (void)willSetFeature:;
@end
