@interface AWETeenAlbumCollectListViewModel : AWEBaseListViewModel
@property (nonatomic) AWETeenAlbumCollectListDataController dataController;
@property (nonatomic) AWETeenAlbumCollectListSectionViewModel sectionViewModel;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (id)sectionViewModel;
- (void)setSectionViewModel:;
- (void)setDataController:;
- (void)removeAlbumWithAlbumID:;
- (void).cxx_destruct;
- (id)dataController;
@end
