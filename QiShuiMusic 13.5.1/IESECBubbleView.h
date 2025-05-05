@interface IESECBubbleView : UIView
@property (nonatomic) IESECBubbleViewConfig config;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) double startTime;
- (id)arrow;
- (void)computeFrame;
- (void)setArrow:;
- (id)contentView;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)setStartTime:;
- (double)startTime;
- (void)show;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)config;
- (void)hide:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateContent:;
@end
