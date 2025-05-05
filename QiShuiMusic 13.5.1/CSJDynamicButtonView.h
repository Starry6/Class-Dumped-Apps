@interface CSJDynamicButtonView : CSJDynamicAbstractView
@property (nonatomic) CSJDynamicButtonDecorator buttonDecorator;
- (id)buttonDecorator;
- (id)initWithGlobalModel:layoutDictionary:parentView:error:;
- (void)maybe_override_updateGradientLayerIfNeed;
- (void)setButtonDecorator:;
- (void).cxx_destruct;
- (void)render;
@end
