@interface AWEProfileSelectCoverDataManager : NSObject
@property (nonatomic) NSArray recommendDataList;
@property (nonatomic) NSArray postWorkDataList;
@property (nonatomic) BOOL postWorkHasMore;
@property (nonatomic) NSString awemeSourceText;
@property (nonatomic) NSString routerSchema;
@property (nonatomic) NSNumber maxCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (id)awemeSourceText;
- (void)setAwemeSourceText:;
- (id)routerSchema;
- (void)setRouterSchema:;
- (void)setRecommendDataList:;
- (void)setPostWorkDataList:;
- (void)setPostWorkHasMore:;
- (id)postWorkURLString;
- (id)postWorkDataList;
- (BOOL)postWorkHasMore;
- (void)loadMorePostWorkListWithCompletion:;
- (void)fetchRecommendListWithCompletion:;
- (void)fetchPostWorkListWithCompletion:;
- (id)recommendDataList;
- (void).cxx_destruct;
@end
