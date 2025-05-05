@interface CNPhotoPickerVariantsManager : NSObject
@property (nonatomic) NSArray avatarBackgrounds;
@property (nonatomic) NSArray defaultEmojis;
- (id)init;
- (void).cxx_destruct;
- (id)randomColorVariant;
- (id)avatarBackgrounds;
- (void)setAvatarBackgrounds:;
- (id)defaultEmojis;
- (void)setDefaultEmojis:;
+ (id)gradientStartColor:;
+ (id)avatarBackgroundsFromDictionary:;
+ (id)defaultEmojisFromDictionary:;
+ (id)colorFromRGBArray:;
+ (id)colorFromRGBString:;
+ (id)colorVariantWithColorNamed:;
+ (id)avatarPoseConfigurationsForAvatarRecord:;
+ (id)sharingProfileAvatarPoseConfigurationForAvatarRecord:;
+ (id)monogramColorGradientBackground:;
+ (id)colorGradientBackground:;
+ (id)nonAlphaColorForBackgroundColor:;
+ (id)compositeColorForTopColor:bottomColor:;
+ (id)gradientBackgroundImageForColor:;
+ (id)generateGradientColorsByColor;
+ (id)generateMonogramGradientColorsByColor;
@end
