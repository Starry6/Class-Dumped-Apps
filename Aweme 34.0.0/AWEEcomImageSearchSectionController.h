@interface AWEEcomImageSearchSectionController : IGListSectionController
@property (nonatomic) AWEEcomImageSearchSectionDataStore sectionDataStore;
@property (nonatomic) <AWEEcomImageSearchSectionControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:atIndex:;
- (id)sizeForSupplementaryViewOfKind:atIndex:;
- (void)didUpdateToObject:;
- (id)supplementaryViewSource;
- (id)sectionDataStore;
- (void)setSectionDataStore:;
- (void)insertItemsInRange:;
- (long long)numberOfItems;
- (id)delegate;
- (id)modelAtIndex:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
