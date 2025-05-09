@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPadAdapterModel : NSObject
@property (nonatomic) BOOL isPadSplitStyle;
@property (nonatomic) BOOL isShrinkVideo;
@property (nonatomic) @? shrinkVideoExtraParams;
@property (nonatomic) @? customViewWillAppearBlock;
@property (nonatomic) @? customViewDidDisappearBlock;
@property (nonatomic) @? customViewWillTransitionBlock;
@property (nonatomic) @? shouldOpenUserPageSplitScreen;
@property (nonatomic) @? openUserPageSplitScreen;
@property (nonatomic) @? customRestoreTabbarStateOnDismissingToFullScreenBlock;
@property (nonatomic) BOOL splitPrimaryViewScrolling;
@property (nonatomic) @? primaryViewScrollEnd;
- (id)shouldOpenUserPageSplitScreen;
- (id)openUserPageSplitScreen;
- (BOOL)isPadSplitStyle;
- (void)setIsPadSplitStyle:;
- (BOOL)isShrinkVideo;
- (void)setIsShrinkVideo:;
- (id)shrinkVideoExtraParams;
- (void)setShrinkVideoExtraParams:;
- (id)customViewWillAppearBlock;
- (void)setCustomViewWillAppearBlock:;
- (id)customViewDidDisappearBlock;
- (void)setCustomViewDidDisappearBlock:;
- (id)customViewWillTransitionBlock;
- (void)setCustomViewWillTransitionBlock:;
- (void)setShouldOpenUserPageSplitScreen:;
- (void)setOpenUserPageSplitScreen:;
- (id)customRestoreTabbarStateOnDismissingToFullScreenBlock;
- (void)setCustomRestoreTabbarStateOnDismissingToFullScreenBlock:;
- (BOOL)splitPrimaryViewScrolling;
- (void)setSplitPrimaryViewScrolling:;
- (id)primaryViewScrollEnd;
- (void)setPrimaryViewScrollEnd:;
- (id)init;
- (void).cxx_destruct;
@end
