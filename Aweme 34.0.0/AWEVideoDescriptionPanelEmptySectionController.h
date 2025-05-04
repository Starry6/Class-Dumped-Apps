@interface AWEVideoDescriptionPanelEmptySectionController : AWEBaseListSectionController
@property (nonatomic) DUXVacantView vacantView;
@property (nonatomic) double heightForCell;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (double)heightForCell;
- (id)cellIdentifierForModel:index:;
- (id)vacantView;
- (void)setVacantView:;
- (void)setHeightForCell:;
- (id)init;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
@end
