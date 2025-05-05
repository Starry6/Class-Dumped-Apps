@interface UIAirDropActivity : UIActivity
- (id)activityTitle;
- (id)activityType;
- (id)_thumbnailSize;
- (id)_activityImage;
- (BOOL)canPerformWithActivityItems:;
- (id)_activitySettingsImage;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (id)classNamesForItems:;
+ (id)classesForClassNames:;
+ (BOOL)canPerformActivityWithItemClasses:;
@end
