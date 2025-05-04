@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1UserBlockStoryListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSNumber type;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber count;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)cursor;
- (id)init;
- (void)setCount:;
- (id)count;
- (void)setCursor:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
