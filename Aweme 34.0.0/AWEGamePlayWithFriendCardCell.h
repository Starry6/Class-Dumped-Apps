@interface AWEGamePlayWithFriendCardCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWEPLVCardMarkLabel markLabel;
@property (nonatomic) UIView infoBackgroundView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awe_themeDidChange:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)markLabel;
- (void)setMarkLabel:;
- (id)infoBackgroundView;
- (void)setInfoBackgroundView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupView;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
