@interface AWEShareTrendingSearchTask : AWEShareCommonTask
@property (nonatomic) UIImage snapshotImage;
- (BOOL)canRecognizeQRCodeOfSize:;
- (void)prepareWithChannel:inView:;
- (void)didFinishPreparingWithSuccess:;
- (id)statsShareTrendingSearchStage;
- (id)fetchTrendingSearchQRCodeStage;
- (id)generateTrendingSearchImageStage;
- (id)showShareTrendingSearchAlertStage;
- (id)boardNameWithTrendingBoardType:;
- (id)finalImageWithQRCodeImage:boardName:;
- (id)shareTrendingSearchTitleWithType:;
- (id)snapshotImage;
- (void).cxx_destruct;
- (void)setSnapshotImage:;
+ (id)taskWithTrendingSearch:;
+ (id)contextWithTrendingSearch:shareInfo:;
+ (id)previousPageWithTrendingBoardType:;
+ (id)itemIDWithTrendingBoardType:;
@end
