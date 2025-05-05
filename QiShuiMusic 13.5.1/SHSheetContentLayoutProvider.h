@interface SHSheetContentLayoutProvider : NSObject
@property (nonatomic) SHSheetContentLayoutSpec layoutSpec;
@property (nonatomic) <SHSheetContentLayoutDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithLayoutSpec:;
- (long long)_sectionForContext:;
- (id)layoutSectionForContext:;
- (id)_layoutForCustomViewSectionWithContext:;
- (id)_layoutForPeopleSectionWithContext:;
- (id)_layoutForAppsSectionWithContext:;
- (id)_layoutForHeroActionsSectionWithContext:;
- (id)_layoutForActionsSectionWithContext:;
- (id)_createHorizontalLayoutSectionWithContext:iconWidth:;
- (id)layoutSpec;
+ (id)_createHeaderSupplementaryItemWithHeightDimension:;
+ (id)_createFooterSupplementaryItemWithHeightDimension:;
@end
