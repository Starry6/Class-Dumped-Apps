@interface IESLivePKAutoMatchWaitCell : UICollectionViewCell
@property (nonatomic) UIView outskirtsView;
@property (nonatomic) UIView insideBorderView;
@property (nonatomic) UIImageView avatorImageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatorImageView;
- (id)insideBorderView;
- (id)outskirtsView;
- (void)playAnimation:key:;
- (void)playCenterBorderAnimation;
- (void)remakeAvatorImageWithAlpha:leftOffset:rightOffset:;
- (void)setAvatorIamgeView:location:;
- (void)setAvatorImageView:;
- (void)setImageViewAlphaAtIndex:;
- (void)setInsideBorderView:;
- (void)setOutskirtsView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutUI;
@end
