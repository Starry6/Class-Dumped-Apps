@interface AWEBaseListCellController : NSObject
@property (nonatomic) AWEBaseListCellViewModel viewModel;
@property (nonatomic) AWEBaseListSectionController sectionController;
- (void)willDisplayCell:;
- (void)didEndDisplayingCell:;
- (void)configCell:;
- (void)didBindCellViewModel;
- (id)sizeForItemWithCollectionViewSize:;
- (void)setSectionController:;
- (id)viewModel;
- (id)sectionController;
- (Class)cellClass;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItem;
+ (id)controllerWithViewModel:;
@end
