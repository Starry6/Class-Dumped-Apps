@interface AWEVideoDescriptionStableMaskLayerBackToFeedView : UIView
@property (nonatomic) UILabel backLabel;
@property (nonatomic) UIView backView;
@property (nonatomic) @? backAction;
- (void)backButtonClicked;
- (id)backLabel;
- (void)setBackLabel:;
- (void)configWithBackHintText:backAction:;
- (id)initWithFrame:;
- (void)setBackAction:;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (id)backAction;
- (void)setupUI;
@end
