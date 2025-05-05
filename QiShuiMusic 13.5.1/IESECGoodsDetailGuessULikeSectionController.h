@interface IESECGoodsDetailGuessULikeSectionController : IESECGoodsDetailBaseSectionController
@property (nonatomic) IESECCollectionViewSectionWaterfallLayout sectionLayout;
@property (nonatomic) UIScrollView recommendScrollView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (id)recommendScrollView;
- (id)sectionLayout;
- (void)setRecommendScrollView:;
- (void)setSectionLayout:;
- (id)sizeForSupplementaryViewOfKind:atIndex:;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:atIndex:;
- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
