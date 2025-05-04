@interface AWEIMMessageNoticeComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMYYLabelPresenter label;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMComponentManager componentManager;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_setupDisplayString;
- (void)p_adaptNoticeLabelBackground;
- (void)refreshNoticeMessage;
- (id)contentPlugin;
- (void)p_refereshContentIfNeeded;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)componentManager;
@end
