@interface AWEMusicPerformanceListViewModel : AWEBaseListViewModel
@property (nonatomic) NSString cursor;
@property (nonatomic) NSString userId;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)createSectionViewModelsWithList:;
- (void)appendList:;
- (id)cursor;
- (id)userId;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setUserId:;
@end
