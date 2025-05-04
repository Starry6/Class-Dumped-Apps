@interface AWEIMTextQuoteReplyComponent : AWEIMTextContentComponent
- (void)componentDidMounted:;
- (void)p_didClickQuoteReply;
- (id)displayMessage;
+ (BOOL)canCreateComponentWithContext:;
@end
