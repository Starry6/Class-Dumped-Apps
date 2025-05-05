@interface IESECWinBubbleMutiCell : UICollectionViewCell
@property (nonatomic) UIImageView tagImage;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView maskView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setTagImage:;
- (id)tagImage;
- (id)maskView;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setMaskView:;
- (id)titleLabel;
- (void)setupUI;
- (void)updateWithModel:;
+ (double)bubbleCardWidth;
+ (double)bubbleCardHeight;
@end
