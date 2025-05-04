@interface AWEVideoDescriptionPanelHeaderSectionController : AWEBaseListSectionController
@property (nonatomic) AWEVideoDescriptionPanelHeaderView headerView;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)cellIdentifierForModel:index:;
- (id)init;
- (double)headerViewHeight;
- (id)headerView;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)setHeaderView:;
@end
