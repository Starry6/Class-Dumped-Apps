@interface UICopyToPasteboardActivity : UIActivity
- (id)activityTitle;
- (id)activityType;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:;
- (void)performActivity;
- (id)pasteboard;
- (void)prepareWithActivityItems:;
- (long long)_defaultSortGroup;
+ (unsigned long long)_xpcAttributes;
@end
