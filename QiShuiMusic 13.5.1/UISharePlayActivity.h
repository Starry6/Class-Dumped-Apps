@interface UISharePlayActivity : UIActivity
@property (nonatomic) SHSheetGroupActivitySharingController groupActivitySharingController;
@property (nonatomic) NSString sessionID;
- (void)setSessionID:;
- (void)_cleanup;
- (id)activityTitle;
- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (id)activityImage;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:;
- (void)prepareWithActivityItems:;
- (id)groupActivitySharingController;
- (void)setGroupActivitySharingController:;
- (long long)_defaultSortGroup;
- (void)groupActivitySharingController:didFinish:;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (BOOL)_canPerform;
@end
