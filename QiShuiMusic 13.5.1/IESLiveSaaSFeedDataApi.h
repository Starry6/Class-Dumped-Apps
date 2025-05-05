@interface IESLiveSaaSFeedDataApi : NSObject
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber token;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) NSDictionary refreshParams;
@property (nonatomic) NSDictionary loadmoreParams;
@property (nonatomic) double refreshStartTime;
@property (nonatomic) double loadmoreStartTime;
@property (nonatomic) NSString url;
- (void)fetch:method:finished:;
- (id)loadmoreParams;
- (double)loadmoreStartTime;
- (id)refreshParams;
- (double)refreshStartTime;
- (id)url;
- (id)initWithURL:;
- (id)token;
- (void)setHasMore:;
- (void)setUrl:;
- (void)setMonitor:;
- (void)setToken:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)monitor;
@end
