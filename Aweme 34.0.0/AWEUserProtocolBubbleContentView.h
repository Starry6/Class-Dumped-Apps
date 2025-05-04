@interface AWEUserProtocolBubbleContentView : UIView
@property (nonatomic) UILabel bubbleTextLabel;
@property (nonatomic) UIImageView clickGuidView;
@property (nonatomic) AWEUserProtocolBubbleConfig config;
- (id)initWithBubbleConfig:;
- (id)bubbleTextLabel;
- (id)clickGuidView;
- (void)setBubbleTextLabel:;
- (void)setClickGuidView:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setupUI;
@end
