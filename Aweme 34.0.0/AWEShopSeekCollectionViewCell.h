@interface AWEShopSeekCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel avatarLabel;
@property (nonatomic) AWEDetailCellTagLabel topLabel;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL usingDynamicCover;
@property (nonatomic) double imageRequestSentinel;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) AWEGradientView maskLayer;
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (void)clearAnimatedImageBuffer;
- (BOOL)shouldUseDynamicCover:;
- (double)imageRequestSentinel;
- (void)setImageRequestSentinel:;
- (void)updateCoverWithCompletion:;
- (void)setUsingDynamicCover:;
- (id)__accessibilityLabelwithTitle:isMine:count:;
- (BOOL)usingDynamicCover;
- (void)configWithModel:isMine:;
- (void)processSRImage:;
- (id)avatarLabel;
- (void)setAvatarLabel:;
- (void)setModel:;
- (void)setAvatarView:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)iconView;
- (id)avatarView;
- (id)model;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (id)maskLayer;
- (void)setTopLabel:;
- (id)topLabel;
- (void)updateUI;
- (void)setMaskLayer:;
- (id)countLabel;
- (void)setCountLabel:;
- (BOOL)isMine;
- (void)setIsMine:;
- (void)_setupUI;
+ (id)identifier;
@end
