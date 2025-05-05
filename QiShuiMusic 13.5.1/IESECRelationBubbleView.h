@interface IESECRelationBubbleView : UIView
@property (nonatomic) UILabel bubbleLabelView;
@property (nonatomic) UIImageView bubbleBackgroundView;
- (id)bubbleLabelView;
- (id)bubbleBackgroundView;
- (void)setBubbleBackgroundView:;
- (void)setBubbleLabelView:;
- (void)updateBubbleViewWithModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
@end
