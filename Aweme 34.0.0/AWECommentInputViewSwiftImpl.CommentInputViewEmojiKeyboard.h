@interface AWECommentInputViewSwiftImpl.CommentInputViewEmojiKeyboard : AWECommentInputViewSwiftImpl.CommentInputViewBaseKeyboard
- (void)awe_viewController:willTransitionToSize:transitionCoordinator:;
- (void)vmojiManagerDidUpdateVirtualAvatar:;
- (void)emoticonKeyboardSendButtonClicked:;
- (void)emoticonKeyboardDidTapSearchItem:;
- (void)emoticonKeyboard:didSelectSticker:selectedView:;
- (BOOL)needUpdateTypingAttributes;
- (void)handleEmoticonThemeChanged;
- (void)dealloc;
- (void).cxx_destruct;
@end
