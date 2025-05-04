@interface AWEPadPolymericChannelNormalSectionHeaderView : UICollectionReusableView
@property (nonatomic) UILabel extraLabel;
@property (nonatomic) UIImageView extraIcon;
@property (nonatomic) UIGestureRecognizer tapGesture;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView extraView;
@property (nonatomic) @? moreButtonClickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)extraLabel;
- (void)setExtraLabel:;
- (void)moreButtonClick;
- (id)moreButtonClickBlock;
- (void)setMoreButtonClickBlock:;
- (id)extraView;
- (id)extraIcon;
- (void)setExtraView:;
- (void)setExtraIcon:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)setupView;
+ (id)sizeWithModel:collectionViewSize:contentSize:;
@end
