@interface AWEPadUIAdapterDetailController : AWEAwemeNewDetailBaseController
@property (nonatomic) q beforeTransitionRow;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
- (id)activeBottomBar;
- (id)aAWEPadDetailTableAdapter;
- (long long)beforeTransitionRow;
- (void)setBeforeTransitionRow:;
- (id)aAWEPadMixVideoAdapter;
- (BOOL)currentVCRotateEnable;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)viewWillAppear:;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadDetailTableAdapterClass;
+ (Class)aAWEPadMixVideoAdapterClass;
@end
