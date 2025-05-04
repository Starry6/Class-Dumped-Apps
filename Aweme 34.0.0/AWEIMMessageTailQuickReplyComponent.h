@interface AWEIMMessageTailQuickReplyComponent : AWEIMFlexComponent
@property (nonatomic) AWEBinding displayingReplyMessageIDBinding;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_addKVO;
- (void)p_createPresenterIfNeeded;
- (void)p_didTapReplyButton;
- (id)displayingReplyMessageIDBinding;
- (void)setDisplayingReplyMessageIDBinding:;
- (void)p_show:;
- (void)p_doShowAction:;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
