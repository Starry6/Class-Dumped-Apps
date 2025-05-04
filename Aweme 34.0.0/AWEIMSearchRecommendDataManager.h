@interface AWEIMSearchRecommendDataManager : NSObject
@property (nonatomic) NSArray lastData;
@property (nonatomic) AWEIMSearchNetworkRequestResult lastResult;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)fetchRecomendData:;
- (void)fetchRecomendDataResult:;
- (void)setLastData:;
- (id)lastData;
- (id)lastRecomendData;
- (id)lastRecomendDataResult;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)lastResult;
- (void)setLastResult:;
+ (id)shareInstance;
@end
