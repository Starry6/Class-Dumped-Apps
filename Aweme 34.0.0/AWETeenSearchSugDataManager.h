@interface AWETeenSearchSugDataManager : NSObject
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) NSString searchKeyWord;
@property (nonatomic) NSMutableArray sugWordList;
- (id)logPassback;
- (void)setLogPassback:;
- (id)searchKeyWord;
- (void)setSearchKeyWord:;
- (void)stopSugQuery;
- (void)setSugWordList:;
- (void)mathchAllSugWordToSearchWordWithModel:;
- (id)sugWordList;
- (id)matchSugwordToSearhWord:;
- (void)fetchSugWithQuery:completion:;
- (void)setTask:;
- (id)task;
- (void).cxx_destruct;
@end
