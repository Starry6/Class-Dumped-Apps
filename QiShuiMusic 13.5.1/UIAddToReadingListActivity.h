@interface UIAddToReadingListActivity : UIActivity
- (id)activityTitle;
- (id)activityType;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (void)prepareWithActivityItems:;
- (BOOL)_showsInSystemActionGroup;
- (id)_heroActionTitle;
- (void)_addToReadingList:withTitle:;
+ (unsigned long long)_xpcAttributes;
@end
