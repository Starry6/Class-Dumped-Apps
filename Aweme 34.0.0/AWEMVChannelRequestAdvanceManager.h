@interface AWEMVChannelRequestAdvanceManager : NSObject
@property (nonatomic) AWEMVChannelDataController dataController;
@property (nonatomic) AWEAwemeResponseModel preloadData;
@property (nonatomic) Q prefetchStatus;
@property (nonatomic) AWEMVChannelPageContext pageContext;
@property (nonatomic) @? completionBlock;
@property (nonatomic) BOOL isFetching;
- (void)setDataController:;
- (unsigned long long)prefetchStatus;
- (void)setPrefetchStatus:;
- (void)initialFetch;
- (id)preloadData;
- (void)setPreloadData:;
- (BOOL)preloadValid;
- (BOOL)checkDataIsEnough:;
- (void)makeDataUnavailable;
- (void)cancelFetchRequest;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
- (BOOL)isFetching;
- (id)dataController;
- (void)refreshData;
+ (id)sharedInstance;
@end
