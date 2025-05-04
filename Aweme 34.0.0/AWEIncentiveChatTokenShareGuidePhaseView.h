@interface AWEIncentiveChatTokenShareGuidePhaseView : UIView
@property (nonatomic) UIImageView labelBackgroundImageView;
@property (nonatomic) UILabel indexLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) CAShapeLayer shapeLayer;
- (void)setIndexLabel:;
- (id)labelBackgroundImageView;
- (id)initWithIndex:content:;
- (id)initWithImage:content:;
- (void)setLabelBackgroundImageView:;
- (id)indexLabel;
- (void)setShapeLayer:;
- (id)shapeLayer;
- (void).cxx_destruct;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
@end
