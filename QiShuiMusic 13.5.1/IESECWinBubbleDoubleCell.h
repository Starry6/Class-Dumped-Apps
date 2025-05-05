@interface IESECWinBubbleDoubleCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) IESECUIImageView arrowImageView;
@property (nonatomic) UIView coverBottomView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverBottomView;
- (void)setCoverBottomView:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (void)updateWithModel:;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (double)bubbleCardWidth;
+ (double)bubbleCardHeight;
+ (double)coverWidth;
@end
