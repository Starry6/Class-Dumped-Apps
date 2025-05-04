@interface AWEIMFoldMessageHelpQuoteReplyComponent : AWEIMFoldMessageHelpComponent
- (void)componentDidMounted:;
- (void)p_tapAction;
- (void)p_createPresenterIfNeed;
- (void)p_prepareProps;
- (id)displayMessage;
+ (BOOL)canCreateComponentWithContext:;
@end
