@interface AWEIMLynxCardContentView : UIView
@property (nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> enterpriseLynxEngine;
@property (nonatomic) AWEIMLynxCardContentProps props;
@property (nonatomic) UIView lynxPlaceholderView;
@property (nonatomic) UIView hookTapGestureView;
@property (nonatomic) NSString messageID;
- (void)lynxDidEndDisplaying;
- (void)updateWithProps:;
- (id)hookTapGestureView;
- (id)enterpriseLynxEngine;
- (void)setEnterpriseLynxEngine:;
- (void)setHookTapGestureView:;
- (void)p_insertSubviews;
- (void)p_updateLynxEngineLayout;
- (void)p_makeEnterpriseLynxEngineWithType:;
- (void)p_updateLynxEngineView;
- (void)p_updateHookTapGestureView;
- (id)lynxPlaceholderView;
- (void)p_updateCommonAttributesWithView:;
- (void)p_didTapHookTapGestureView;
- (void)setLynxPlaceholderView:;
- (id)messageID;
- (id)props;
- (id)initWithFrame:;
- (void)setMessageID:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setProps:;
@end
