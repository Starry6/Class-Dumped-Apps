@interface UIKBViewBackedKeyView : UIKBKeyView
@property (nonatomic) UIKBBackdropView backdropView;
@property (nonatomic) UIView<UIKBKeyViewContentView> contentView;
@property (nonatomic) UIView touchForwardingView;
- (id)backdropView;
- (id)contentView;
- (void)retestSelectedVariantIndexForKey:atPoint:;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (void)setRenderConfig:;
- (id)hitTest:withEvent:;
- (void)retestForTouchUpSelectedVariantIndexForKey:atPoint:;
- (void)setBackdropView:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)updateForKeyplane:key:;
- (id)renderFlagsForTraits:;
- (void)setDrawFrame:;
- (id)touchForwardingView;
- (void)setTouchForwardingView:;
@end
