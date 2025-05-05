@interface UIKeyboardDicationBackgroundGradientView : UIView
@property (nonatomic) UIKBRenderConfig renderConfig;
@property (nonatomic) UIDictationView dictationView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_timingFunctionForAnimation;
- (void)drawRect:;
- (id)renderConfig;
- (void)layoutSubviews;
- (id)backgroundColorForCurrentRenderConfig;
- (void)setRenderConfig:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDictationView:;
- (id)_basicAnimationForView:withKeyPath:;
- (id)dictationView;
- (void)startColorTransitionIn;
- (id)_backgroundFillFrame;
- (void)startColorTransitionOut;
@end
