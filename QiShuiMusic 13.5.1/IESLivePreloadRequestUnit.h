@interface IESLivePreloadRequestUnit : NSObject
@property (nonatomic) IESLivePreloadRequestAPI requestApi;
@property (nonatomic) IESLivePreloadRequestResult requestResult;
@property (nonatomic) NSMutableDictionary subscribeCompletes;
@property (nonatomic) NSString identifier;
@property (nonatomic) Q requestState;
@property (nonatomic) <IESLivePreloadRequestImplProtocol> requestImpl;
- (BOOL)isNormalRequest;
- (void)setRequestImpl:;
- (void)dealRequestResult:error:;
- (void)notifyComplete;
- (void)removeSubscribeIdentifier:;
- (id)requestApi;
- (id)requestImpl;
- (void)setRequestApi:;
- (void)setSubscribeCompletes:;
- (id)subscribeCompletes;
- (void)subscribeIdentifier:complete:;
- (id)init;
- (unsigned long long)requestState;
- (id)identifier;
- (void)stop;
- (void)run;
- (void)setRequestState:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)requestResult;
- (void)setRequestResult:;
@end
