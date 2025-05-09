@interface AWEBookImpl.BookDetailPageTabListViewController : AWEBaseTabListViewController
@property (nonatomic) q preferredStatusBarStyle;
- (BOOL)custom_commentInputViewCustomSendAction:;
- (BOOL)custom_commentInputViewShouldBeginEditing:;
- (BOOL)custom_commentInputViewShouldReturn:;
- (void)attributedLabel:didSelectLinkWithURL:;
- (void)alertDialogDidClickMaskArea:;
- (void)alertDialogDidDismiss:;
- (void)appWillResignActiveWithNotice:;
- (void)appDidBecomeActiveWithNotice:;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)partialSheetDidDismiss:;
- (void)partialSheet:didChangeFrame:withUserInteraction:;
- (void)partialSheetWillFloded:;
- (void)partialSheetDidFloded:;
- (void)partialSheetWillExpanded:;
- (void)partialSheetDidExpanded:;
- (void)task:didBeginWithInfo:;
- (void)didFinishLogin;
- (BOOL)configWithRouterParamDict:;
- (void)jumpShootPage;
- (void)showCommentSheet;
- (void)showSuccessShareNoticeTipWithNotice:;
- (void)bookScoreAndContentChangedWithNotice:;
- (id)initWithNibName:bundle:viewModel:;
- (void)showCommentBookScoreViewController:completion:;
- (void)dismissCommentBookScoreViewController:completion:;
- (void)resetBookScoreViewFrameLimited:;
- (void)controllBookScoreViewClosed;
- (void)setupContainerScrollView:;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:index:;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (id)marginsForSegmentedControl;
- (void)updateSegmentedControl:itemModelsArray:itemConfigsArray:;
- (void)tabListContainerDidSelectItemAtIndex:itemViewController:isByTap:;
- (void)tabListContainerScrollViewDidScroll:;
- (void)tabListContainerScrollViewWillBeginDragging:;
- (void)tabListContainerScrollViewDidEndDragging:willDecelerate:;
- (void)tabListContainerDidEndScrolling:;
- (void)tabListDidTapItemAtIndex:;
- (BOOL)tabContentUseMaxHeight;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (long long)preferredStatusBarStyle;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
@end
