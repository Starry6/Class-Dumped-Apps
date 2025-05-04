@interface AWEXBridgePdaAwemeRequestMethod : BDXBridgeMethod
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)_callWithParamModel:completionHandler:;
- (void)storeAwemeCache:withConfig:;
- (id)awe_checkAwemeCacheConfig:;
- (id)awe_convertPrefetchRequestModel:;
- (id)cropResponse:withConfig:;
- (BOOL)awe_isSupportedMethod:;
- (id)enumerateDictionaryWithOrigin:withCrop:;
- (long long)authType;
- (id)methodName;
+ (BOOL)allowBackgroundThreadCall;
+ (id)metaInfo;
@end
