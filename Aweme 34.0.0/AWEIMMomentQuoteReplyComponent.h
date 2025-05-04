@interface AWEIMMomentQuoteReplyComponent : AWEIMMessageMomentContentComponent
- (void)componentDidMounted:;
- (void)didTappedCover;
- (id)displayMessage;
+ (BOOL)canCreateComponentWithContext:;
@end
