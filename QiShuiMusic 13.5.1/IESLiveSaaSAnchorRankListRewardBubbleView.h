@interface IESLiveSaaSAnchorRankListRewardBubbleView : UIView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIImageView medalView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView rectangleView;
@property (nonatomic) UIView triangleView;
@property (nonatomic) @? closeBlock;
- (id)closeBlock;
- (void)didClickCloseButton:;
- (id)medalView;
- (id)rectangleView;
- (void)setCloseBlock:;
- (void)setMedalView:;
- (void)setRectangleView:;
- (void)setTriangleView:;
- (id)triangleView;
- (id)textLabel;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (id)closeButton;
- (void)setCloseButton:;
@end
