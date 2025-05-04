@interface AWEIMAudioQuoteReplyComponent : AWEIMAudioContentComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_loadDetailMessageFrom:;
- (id)displayMessage;
+ (BOOL)canCreateComponentWithContext:;
@end
