@interface AWEListenFeedDataController : AWEBaseDataController
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber listenMode;
@property (nonatomic) BOOL isPlayListRequest;
@property (nonatomic) NSString path;
@property (nonatomic) NSNumber currentCursor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)loadmoreWithCompletion:;
- (id)listenMode;
- (void)setListenMode:;
- (BOOL)isPlayListRequest;
- (void)setIsPlayListRequest:;
- (id)currentCursor;
- (void)setCount:;
- (id)path;
- (id)count;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)fetchWithCompletion:;
@end
