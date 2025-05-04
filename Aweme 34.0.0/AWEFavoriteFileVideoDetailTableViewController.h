@interface AWEFavoriteFileVideoDetailTableViewController : AWEAwemeDetailTableViewController
@property (nonatomic) AWEListDataController<AWEFavoriteFileVideoDataControllerProtocol> favoriteFileVideoDataController;
@property (nonatomic) BOOL videoDidScroll;
- (void)loadmore;
- (void)loadMoreForOldStyle;
- (double)getStartSeekTime:;
- (BOOL)videoDidScroll;
- (void)setFavoriteFileVideoDataController:;
- (void)p_setupDataControllerSyncBlock;
- (id)favoriteFileVideoDataController;
- (void)setVideoDidScroll:;
- (void)viewWillDisappear:;
- (void)play;
- (void)viewDidLoad;
- (void).cxx_destruct;
+ (id)detailTableViewControllerWithDataController:initialIndex:referString:enterFrom:context:;
@end
