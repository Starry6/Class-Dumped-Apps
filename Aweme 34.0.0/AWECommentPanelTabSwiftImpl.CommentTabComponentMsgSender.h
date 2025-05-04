@interface AWECommentPanelTabSwiftImpl.CommentTabComponentMsgSender : NSObject
- (void)commentPanelDidDismiss;
- (void)tabDidSelected:from:method:;
- (void)onCommentUIThemeChange:;
- (void)tabContainerViewWillAppear;
- (void)tabContainerViewDidAppear;
- (void)tabContainerViewWillDisappear;
- (void)tabContainerViewDidDisappear;
- (void)tabDidSelectedWithoutChange:from:method:;
- (void)commentPanelDidShow;
- (void)willDisplayPanelHeightChangeTransition:isFullScreen:;
- (id)init;
- (void).cxx_destruct;
@end
