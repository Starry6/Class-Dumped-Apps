@interface AWEFeedCacheFeedRequestProcessor : NSObject
@property (nonatomic) q count;
@property (nonatomic) q pullType;
@property (nonatomic) q maxRetryCount;
@property (nonatomic) q requestTimes;
@property (nonatomic) q fetchCount;
@property (nonatomic) q awemeType;
@property (nonatomic) NSDictionary params;
@property (nonatomic) <AWEFeedCacheDataFilter> feedFilter;
@property (nonatomic) NSMutableArray videosArray;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL forbiddenDurThisSession;
@property (nonatomic) BOOL forceRequestTrack;
@property (nonatomic) AWEListDataController feedDataController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)awemeType;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (long long)pullType;
- (void)setPullType:;
- (void)setAwemeType:;
- (void)setVideosArray:;
- (id)videosArray;
- (void)setRequestTimes:;
- (long long)requestTimes;
- (BOOL)forbiddenDurThisSession;
- (BOOL)forceRequestTrack;
- (void)setForceRequestTrack:;
- (id)onProcess:context:;
- (id)initWithCount:pullType:awemeType:maxRetryCount:params:feedFilter:;
- (void)setFeedFilter:;
- (void)fetchWithCompletion:Context:;
- (id)feedDataController;
- (id)feedFilter;
- (void)setFeedDataController:;
- (void)setMaxRetryCount:;
- (long long)maxRetryCount;
- (void)setCount:;
- (long long)count;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
- (long long)fetchCount;
- (void)setFetchCount:;
@end
