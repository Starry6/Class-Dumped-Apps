@interface AWEFCoinBridgeOpenCoinRewardAdAgainMethod : DHBaseBridgeMethod
@property (nonatomic) @? completion;
@property (nonatomic) NSString reqFrom;
@property (nonatomic) NSString token;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)setReqFrom:;
- (id)reqFrom;
- (id)completion;
- (long long)authType;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (id)methodName;
@end
