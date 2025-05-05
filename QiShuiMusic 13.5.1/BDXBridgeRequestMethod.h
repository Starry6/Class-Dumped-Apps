@interface BDXBridgeRequestMethod : BDXBridgeMethod
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)_callWithParamModel:completionHandler:;
- (void)callWithParamModel:completionHandler:;
- (BOOL)isSupportedMethod:;
- (Class)resultModelClass;
- (void)setNetworkService:;
- (long long)authType;
- (id)networkService;
- (id)methodName;
+ (BOOL)allowBackgroundThreadCall;
+ (id)metaInfo;
@end
