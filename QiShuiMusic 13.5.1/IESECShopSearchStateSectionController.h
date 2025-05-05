@interface IESECShopSearchStateSectionController : IGListSectionController
@property (nonatomic) IESECCollectionViewSectionLayout sectionLayout;
@property (nonatomic) IESECShopStateDiffableModel model;
@property (nonatomic) double noMoreHeight;
@property (nonatomic) double noGoodsHeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)initWithNoGoodsHeight:noMoreHeight:;
- (double)noGoodsHeight;
- (double)noMoreHeight;
- (id)sectionLayout;
- (void)setNoGoodsHeight:;
- (void)setNoMoreHeight:;
- (void)setSectionLayout:;
- (id)model;
- (long long)numberOfItems;
- (void)setModel:;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
