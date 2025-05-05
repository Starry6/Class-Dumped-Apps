@interface AnnieXDataProviderManager : NSObject
@property (nonatomic) NSDictionary globalCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGlobalCache:;
- (id)fetchCardModelWithBid:urlString:schemaClass:;
- (id)fetchCardModelWithBid:urlString:schemaClass:queryItem:;
- (id)globalCache;
- (void)invokeServiceMethodWithSessionId:bizDataProvider:selector:;
- (id)p_engineTypeWithSchema:;
- (id)p_generateParamWithUrl:schemaClass:;
- (id)p_generateParamsWithQueryItems:schemaClass:urlString:;
- (void)p_provideLynxInstanceData:lynxParams:;
- (void)p_provideWebInstanceData:webParams:;
- (void)p_updateLynxKitParams:schemaPrams:;
- (void)provideDefaultCardDataWithCardModel:;
- (void)provideInstanceDataWitCardModel:schemaClass:;
- (Class)schemaClass;
- (id)init;
- (void).cxx_destruct;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (unsigned long long)serviceType;
+ (id)shareInstance;
@end
