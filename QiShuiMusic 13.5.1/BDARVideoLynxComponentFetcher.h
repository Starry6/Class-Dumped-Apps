@interface BDARVideoLynxComponentFetcher : NSObject
@property (nonatomic) BDARVPayloadData payloadData;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)analysisWithSchema:withLoadedBlock:;
- (BOOL)checkBase64WithQuery:urlComponents:loadedBlock:;
- (BOOL)checkChannelAndFallBackWithQuery:urlComponents:loadedBlock:;
- (BOOL)checkComponentTypeWithQuery:urlComponents:loadedBlock:;
- (BOOL)checkGeckoDataWithSchema:loadedBlock:;
- (BOOL)checkPrefixHttpsSchema:loadedBlock:;
- (BOOL)checkSpecialUrlWithQuery:urlComponents:loadedBlock:;
- (BOOL)checkValidSchema:;
- (id)findKeyword:urlComponents:;
- (id)geckoData:;
- (id)initWithPayloadData:disableCache:;
- (void)loadDynamicComponent:withLoadedBlock:;
- (id)makeError:;
- (void)requestTemplateWithURL:enableCache:completion:;
- (BOOL)disableCache;
- (void)setPayloadData:;
- (void).cxx_destruct;
- (void)setDisableCache:;
- (id)payloadData;
@end
