@interface AWEIMMessageListFooterComponent : AWEIMComponentBase
@property (nonatomic) UIView footerContainer;
@property (nonatomic) <AWEIMMessageListLayoutInterface> layoutService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)layoutService;
- (void)setLayoutService:;
- (void)addFooterView:withConfig:;
- (void)dismissFooterView:withConfig:;
- (void)addCoverView:withConfig:;
- (void)dismisssCoverView:withConfig:;
- (void).cxx_destruct;
- (id)footerContainer;
- (void)setFooterContainer:;
+ (BOOL)canCreateComponentWithContext:;
@end
