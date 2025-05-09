@interface AWEGDRoutePreRequestManager : NSObject
@property (nonatomic) NSMutableDictionary requestParams;
@property (nonatomic) NSDictionary headerParams;
@property (nonatomic) NSDictionary ditoDataDic;
@property (nonatomic) @ response;
@property (nonatomic) NSError error;
@property (nonatomic) Q requestState;
@property (nonatomic) NSString preGeneratedTraceID;
@property (nonatomic) @? completion;
- (id)headerParams;
- (void)setHeaderParams:;
- (BOOL)isParamsEqualWithParam:headerParams:;
- (id)ditoDataDic;
- (id)getProcessedOneStepAbilityRequestParams;
- (void)setPreGeneratedTraceID:;
- (id)preGeneratedTraceID;
- (id)buildRequestHeadersWithParams:;
- (void)setDitoDataDic:;
- (void)delayClearAllData;
- (BOOL)isEqualDictionaryForDic:andDic:;
- (void)sendRoutePreRequestWithSchema:;
- (void)setRequestState:;
- (unsigned long long)requestState;
- (id)completion;
- (void)setError:;
- (void)setCompletion:;
- (id)response;
- (void)clearAll;
- (void).cxx_destruct;
- (id)error;
- (void)setResponse:;
- (id)requestParams;
- (void)setRequestParams:;
+ (BOOL)didHitOneStepOptimize;
+ (BOOL)enableRoutePreRequest;
+ (BOOL)didHitPOIPreRequest;
+ (id)shared;
@end
