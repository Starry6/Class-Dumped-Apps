@interface AWEStoryImpl.StoryTabDataController : AWEStoryKit.StoryKitBaseController
@property (nonatomic) NSString tabUserID;
@property (nonatomic) BOOL tabHasMore;
@property (nonatomic) q level;
@property (nonatomic) Q maxTimestamp;
- (BOOL)tabHasMore;
- (void)replaceTabDataSourceWith:;
- (void)syncParamsWith:level:maxTimestamp:;
- (id)tabUserID;
- (id)retrieveAwemeModelArray;
- (void)setTabUserID:;
- (void)setTabHasMore:;
- (void)setLevel:;
- (id)init;
- (unsigned long long)currentSource;
- (long long)level;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)maxTimestamp;
- (void)setMaxTimestamp:;
@end
