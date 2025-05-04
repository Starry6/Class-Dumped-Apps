@interface AWEIMLynxDynamicCardTableViewCell : AWEIMFirstResponderUserMessageTableViewCell
@property (nonatomic) UIView container;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)firstResponderContainerView;
- (void)p_updateLynxCardSize:;
- (id)p_getLynxContainerView:;
- (id)p_getLiveLynxConatinerView:;
- (void)setContainer:;
- (id)container;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
