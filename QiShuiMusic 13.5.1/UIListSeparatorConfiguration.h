@interface UIListSeparatorConfiguration : NSObject
@property (nonatomic) BOOL _ignoreBottomSeparatorInsetsFromCell;
@property (nonatomic) BOOL _ignoreTopSeparatorInsetsFromCell;
@property (nonatomic) UIVisualEffect _visualEffect;
@property (nonatomic) q topSeparatorVisibility;
@property (nonatomic) q bottomSeparatorVisibility;
@property (nonatomic) {NSDirectionalEdgeInsets=dddd} topSeparatorInsets;
@property (nonatomic) {NSDirectionalEdgeInsets=dddd} bottomSeparatorInsets;
@property (nonatomic) UIColor color;
@property (nonatomic) UIColor multipleSelectionColor;
@property (nonatomic) UIVisualEffect visualEffect;
- (void)setBottomSeparatorVisibility:;
- (id)visualEffect;
- (void)_setMultipleSelectionColor:;
- (id)_color;
- (void)setMultipleSelectionColor:;
- (long long)topSeparatorVisibility;
- (void)_setIgnoreBottomSeparatorInsetsFromCell:;
- (long long)bottomSeparatorVisibility;
- (void)setColor:;
- (void)setVisualEffect:;
- (void)setBottomSeparatorInsets:;
- (id)_visualEffect;
- (void)_setInsets:;
- (id)_multipleSelectionColor;
- (id)_insets;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithListAppearance:;
- (id)bottomSeparatorInsets;
- (BOOL)_ignoreBottomSeparatorInsetsFromCell;
- (id)color;
- (void)encodeWithCoder:;
- (void)_setIgnoreTopSeparatorInsetsFromCell:;
- (void)_replaceAutomaticValuesWithValuesFromConfiguration:;
- (void)setTopSeparatorInsets:;
- (id)topSeparatorInsets;
- (void).cxx_destruct;
- (id)multipleSelectionColor;
- (void)_setColor:;
- (id)description;
- (void)_setVisualEffect:;
- (id)__copyWithSubclass:inZone:;
- (id)_multiselectSeparatorColorForListAppearance:;
- (void)setTopSeparatorVisibility:;
- (BOOL)isEqual:;
- (BOOL)_ignoreTopSeparatorInsetsFromCell;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearancePlain;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceGrouped;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceInsetGrouped;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebar;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebarPlain;
@end
