@interface SFDefaultStartPageVisualStyleProvider : NSObject
@property (nonatomic) double defaultRowSpacing;
@property (nonatomic) double sectionHeaderBottomGap;
@property (nonatomic) UIFont sectionHeaderLargeTitleFont;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionHeaderLargeTitleFont;
- (id)collectionViewContentInsetsWithNavigationBarPosition:;
- (double)sectionHeaderBottomGap;
- (id)sectionContentInsetsWithViewLayoutMargins:;
- (double)rowSpacingForSectionItemType:containerSize:;
- (double)defaultRowSpacing;
- (double)siteIconSizeForContainerSize:;
- (id)overrideTraitCollectionFromProposedTraits:isShowingWallpaper:;
- (long long)numberOfColumnsForSectionItemType:sectionWidth:traitCollection:;
+ (id)sharedProvider;
@end
