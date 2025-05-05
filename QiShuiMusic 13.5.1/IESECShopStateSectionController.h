@interface IESECShopStateSectionController : IGListSectionController
@property (nonatomic) IESECCollectionViewSectionLayout sectionLayout;
@property (nonatomic) IESECShopStateDiffableModel model;
@property (nonatomic) <IESECStateSectionControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didTapShopEntry;
- (id)cellForItemAtIndex:;
- (void)didShowShopEntry;
- (void)didUpdateToObject:;
- (id)sectionLayout;
- (void)setSectionLayout:;
- (id)model;
- (long long)numberOfItems;
- (void)setModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
