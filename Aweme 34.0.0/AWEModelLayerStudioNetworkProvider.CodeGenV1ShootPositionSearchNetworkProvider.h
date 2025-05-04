@interface AWEModelLayerStudioNetworkProvider.CodeGenV1ShootPositionSearchNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSString query;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber count;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithQuery:count:;
- (id)cursor;
- (id)init;
- (void)setCount:;
- (void)setQuery:;
- (id)query;
- (id)count;
- (void)setCursor:;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
