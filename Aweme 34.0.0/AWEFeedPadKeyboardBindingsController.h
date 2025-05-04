@interface AWEFeedPadKeyboardBindingsController : AWEBaseController
@property (nonatomic) BOOL interactionDisable;
- (id)aAWEPadModuleAdapter;
- (void)openSplitScreenWithViewController:enterMethod:;
- (void)viewDidLoadAfterTableviewSetup;
- (id)aAWEPadSplitScreenAdapter;
- (id)splitController;
- (BOOL)interactionDisable;
- (void)setInteractionDisable:;
- (id)trackCommonParams;
- (void)dismissSharePanel;
- (void)registerKeyboardBindings;
- (void)trackKeyEvent:key:clickType:;
- (void)gotoUserProfile;
- (void)enableInteractionController:forCell:;
- (BOOL)isFeedOnScreen;
- (void)trackKeyboardUserGuidShow;
- (BOOL)scrollToPre;
- (void)dismissSharePanelWithCompletion:;
- (void)disLikeLiveCell;
- (void)dislikeNormarlCell;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (BOOL)scrollToNext;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
@end
