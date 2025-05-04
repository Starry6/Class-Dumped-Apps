@interface AWEPlayVideoAbstractBottomComponent : UICollectionReusableView
@property (nonatomic) UILabel label;
@property (nonatomic) UIView leftLine;
@property (nonatomic) UIView rightLine;
@property (nonatomic) UIImageView hintIconImv;
@property (nonatomic) <AWEPlayVideoAbstractBottomComponentDelegate> delegate;
- (id)leftLine;
- (void)setLeftLine:;
- (id)rightLine;
- (void)setRightLine:;
- (void)hintIconImgaeViewTouched;
- (id)hintIconImv;
- (void)setHintIconImv:;
- (void)setBottomText:interactionEnabled:;
- (void)setLabel:;
- (id)delegate;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
