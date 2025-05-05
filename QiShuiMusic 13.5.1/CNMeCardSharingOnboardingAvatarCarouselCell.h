@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
@property (nonatomic) NSUUID displaySessionUUID;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
@property (nonatomic) double imageInsetPercentage;
- (void)layoutSubviews;
- (void)setImage:;
- (void)setLabel:;
- (void)setTitle:;
- (id)label;
- (id)initWithFrame:;
- (id)title;
- (void).cxx_destruct;
- (id)imageView;
- (id)image;
- (void)setImageView:;
- (id)displaySessionUUID;
- (void)setDisplaySessionUUID:;
- (double)imageInsetPercentage;
- (void)setImageInsetPercentage:;
+ (id)cellIdentifier;
@end
