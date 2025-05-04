@interface AWETeenStickerVideoListDataController : AWEListDataController
@property (nonatomic) NSString pageToken;
@property (nonatomic) NSString resourceID;
@property (nonatomic) NSString panelTitle;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)panelTitle;
- (void)setPanelTitle:;
- (id)pageToken;
- (void)setPageToken:;
- (void)p_reportAwemeVideoNotTeen:;
- (void)p_fetchVideoListWithComplition:;
- (id)resourceID;
- (id)init;
- (void)setResourceID:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
