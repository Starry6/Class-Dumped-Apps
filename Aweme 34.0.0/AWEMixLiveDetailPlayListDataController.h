@interface AWEMixLiveDetailPlayListDataController : AWEListDataController
@property (nonatomic) NSObject<OS_dispatch_queue> mixDataQueue;
@property (nonatomic) @? requestFinishBlock;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSString mixId;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (id)mixId;
- (void)setMixId:;
- (void)fetchWithCount:type:completion:;
- (id)requestFinishBlock;
- (void)setRequestFinishBlock:;
- (id)mixDataQueue;
- (void)setMixDataQueue:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
