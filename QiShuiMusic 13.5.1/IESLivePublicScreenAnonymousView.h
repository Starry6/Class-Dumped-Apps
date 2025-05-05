@interface IESLivePublicScreenAnonymousView : UIView
@property (nonatomic) UIView rawView;
@property (nonatomic) NSString bizType;
@property (nonatomic) q targetContainer;
@property (nonatomic) IESLivePSComponentConfigModel configModel;
- (id)rawView;
- (void)setConfigModel:;
- (id)bizType;
- (void)bindView:;
- (id)configModel;
- (void)setBizType:;
- (void)setRawView:;
- (id)intrinsicContentSize;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (long long)targetContainer;
- (void)setTargetContainer:;
@end
