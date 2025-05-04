@interface AWEEmptyPageSectionController : AWEBaseListSectionController
@property (nonatomic) AWEEmptyPageSectionInnerViewController emptyPageViewController;
@property (nonatomic) double height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (id)emptyPageViewController:emptyPageConfigForState:;
- (void)emptyPageViewController:emptyPagePrimaryButtonTapped:;
- (id)emptyPageViewController;
- (void)setEmptyPageViewController:;
- (id)init;
- (void)setHeight:;
- (Class)cellClass;
- (void).cxx_destruct;
- (double)height;
@end
