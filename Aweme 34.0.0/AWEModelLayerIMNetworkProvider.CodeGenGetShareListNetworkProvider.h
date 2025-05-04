@interface AWEModelLayerIMNetworkProvider.CodeGenGetShareListNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider
@property (nonatomic) NSString source;
@property (nonatomic) NSArray reqKeys;
@property (nonatomic) NSArray filterKeys;
@property (nonatomic) NSString baseInfo;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)baseInfo;
- (void)setBaseInfo:;
- (id)reqKeys;
- (void)setReqKeys:;
- (id)filterKeys;
- (void)setFilterKeys:;
- (id)initWithSource:;
- (id)init;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (Class)modelClass;
+ (id)businessURI;
@end
