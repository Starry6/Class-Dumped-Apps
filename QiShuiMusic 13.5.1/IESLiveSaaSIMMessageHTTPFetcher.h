@interface IESLiveSaaSIMMessageHTTPFetcher : NSObject
@property (nonatomic) q fetchCounter;
@property (nonatomic) IESLiveIMAppInfo appInfo;
@property (nonatomic) @? urlCallback;
@property (nonatomic) @? paramsCallback;
@property (nonatomic) @? stateCallback;
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUrlCallback:;
- (long long)fetchCounter;
- (void)fetchWithContext:state:data:;
- (id)paramsCallback;
- (void)setFetchCounter:;
- (void)setParamsCallback:;
- (void)setStateCallback:;
- (id)stateCallback;
- (void)trackPollMessageInfoWith:;
- (id)urlCallback;
- (id)init;
- (void)setState:;
- (id)appInfo;
- (long long)state;
- (void).cxx_destruct;
- (void)setAppInfo:;
@end
