@interface AWEIMMessageTabEcomCleanUnreadComponent : AWEIMComponentBase
@property (nonatomic) UIView cleanUnreadButtonView;
@property (nonatomic) AWEButton cleanUnreadButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (void)hideEcomCleanUnreadView:;
- (id)cleanUnreadButtonView;
- (id)cleanUnreadButton;
- (void)p_didClickCleanUnreadButton;
- (void)setCleanUnreadButtonView:;
- (void)setCleanUnreadButton:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
