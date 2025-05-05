@interface CNMeCardSharingOnboardingAvatarCarouselItem : NSObject
@property (nonatomic) UIImage cachedImage;
@property (nonatomic) @? imageProvider;
@property (nonatomic) Q imageType;
@property (nonatomic) NSString title;
@property (nonatomic) double imageInsetPercentage;
@property (nonatomic) BOOL shouldShowVariants;
- (unsigned long long)imageType;
- (id)imageProvider;
- (id)initWithTitle:;
- (id)title;
- (void).cxx_destruct;
- (void)setImageType:;
- (id)cachedImage;
- (void)setCachedImage:;
- (id)initWithImageInsetPercentage:imageProvider:;
- (double)imageInsetPercentage;
- (BOOL)shouldShowVariants;
- (void)setShouldShowVariants:;
@end
