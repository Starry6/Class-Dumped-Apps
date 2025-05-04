@interface AWEIMDouyinRedPacketPresenter : AWEIMUIViewPresenter
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)cellVisibleLifeCycleChanged:;
- (void)willUnBindView:;
- (BOOL)isRedPacketEnded;
- (void)updateViewContent;
- (void)updateViewHiddenState;
- (void)updateMultiAvatarView;
- (void)updateTopCoverView;
- (void)updateOpenBtnView;
- (void)updateBottomCoverView;
- (void)updateTitleTopMargin;
- (void)updateCoverSubTitle;
- (id)initWithContext:;
@end
