@interface AWEIMLynxDynamicCardContentView : UIView
@property (nonatomic) UIView container;
@property (nonatomic) AWEIMLynxDynamicCardContentProps props;
- (void)updateWithProps:;
- (void)p_updateLynxCardSize:;
- (void)p_updateContainer;
- (void)p_updateContainerSize;
- (id)p_getLynxContainerView;
- (id)p_getLiveLynxContainerView;
- (void)setContainer:;
- (id)container;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setProps:;
@end
