@interface IESECShopRecommendTitleSectionController : IGListSectionController
@property (nonatomic) IESECCollectionViewSectionLayout sectionLayout;
@property (nonatomic) double layoutHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)sectionLayout;
- (void)setLayoutHeight:;
- (void)setSectionLayout:;
- (void)showTrack;
- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (double)layoutHeight;
- (id)sizeForItemAtIndex:;
@end
