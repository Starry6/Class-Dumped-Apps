@interface SUIShareActivity : UIActivity
- (id)activityTitle;
- (id)activityType;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:;
- (long long)_defaultSortGroup;
- (BOOL)ss_shouldExecuteInShareSheet;
- (BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
@end
