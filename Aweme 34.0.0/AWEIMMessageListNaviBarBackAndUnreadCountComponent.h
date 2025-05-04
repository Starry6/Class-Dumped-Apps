@interface AWEIMMessageListNaviBarBackAndUnreadCountComponent : AWEIMComponentBase
@property (nonatomic) UIView<AWEIMMessageVCNavigationUnreadViewProtocol> backAndUnreadCountView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (void)backWithCompletion:;
- (double)naviBarViewCustomSpacing;
- (void)componentDidMounted:;
- (long long)filterUnreadCoundInCurrentConversation:;
- (id)backAndUnreadCountView;
- (id)p_conversation;
- (void)p_didClickBackAndUnreadCountView;
- (void)setBackAndUnreadCountView:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
