@interface AWEPreviewStyleListContainerViewModel : AWEBaseListViewModel
@property (nonatomic) NSString viewName;
@property (nonatomic) NSArray styleList;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)setViewName:;
- (void)setStyleList:;
- (id)viewName;
- (void).cxx_destruct;
- (id)styleList;
@end
