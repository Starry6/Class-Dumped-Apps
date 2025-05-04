@interface AWEIMMessageGroupChainsQuoteReplyComponent : AWEIMMessageGroupChainsContentComponent
- (void)componentDidMounted:;
- (id)displayMessage;
- (id)init;
+ (BOOL)canCreateComponentWithContext:;
@end
