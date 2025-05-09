@interface UIBarItem : NSObject
@property (nonatomic) BOOL _hasCustomizableInstanceAppearanceModifications;
@property (nonatomic) BOOL _shouldArchiveUIAppearanceTags;
@property (nonatomic) NSString resolvedTitle;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
@property (nonatomic) UIImage landscapeImagePhone;
@property (nonatomic) UIImage largeContentSizeImage;
@property (nonatomic) {UIEdgeInsets=dddd} imageInsets;
@property (nonatomic) {UIEdgeInsets=dddd} landscapeImagePhoneInsets;
@property (nonatomic) {UIEdgeInsets=dddd} largeContentSizeImageInsets;
@property (nonatomic) q tag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)selected;
- (long long)tag;
- (id)init;
- (void)setTitleTextAttributes:forState:;
- (id)initWithCoder:;
- (id)titleTextAttributesForState:;
- (void)encodeWithCoder:;
- (BOOL)hasImage;
- (void)setTag:;
- (void).cxx_destruct;
- (BOOL)hasTitle;
- (id)largeContentSizeImage;
- (void)setLargeContentSizeImage:;
- (id)largeContentSizeImageInsets;
- (void)setLargeContentSizeImageInsets:;
- (id)resolvedTitle;
- (id)_attributedTitleForState:withDefaultAttributes:;
- (BOOL)_hasCustomizableInstanceAppearanceModifications;
- (void)_setHasCustomizableInstanceAppearanceModifications:;
- (BOOL)_shouldArchiveUIAppearanceTags;
- (void)_setShouldArchiveUIAppearanceTags:;
+ (id)appearance;
+ (id)_appearanceBlindViewClasses;
+ (id)_appearanceWhenContainedIn:;
+ (id)appearanceWhenContainedInInstancesOfClasses:;
+ (id)appearanceWhenContainedIn:;
+ (id)appearanceForTraitCollection:;
+ (id)appearanceForTraitCollection:whenContainedInInstancesOfClasses:;
+ (id)appearanceForTraitCollection:whenContainedIn:;
@end
