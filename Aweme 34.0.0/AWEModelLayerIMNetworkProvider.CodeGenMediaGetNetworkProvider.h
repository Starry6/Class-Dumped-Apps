@interface AWEModelLayerIMNetworkProvider.CodeGenMediaGetNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider
@property (nonatomic) NSNumber convShortId;
@property (nonatomic) NSString albumId;
@property (nonatomic) NSString mediaIds;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber limit;
- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)convShortId;
- (void)setConvShortId:;
- (id)albumId;
- (void)setAlbumId:;
- (id)mediaIds;
- (void)setMediaIds:;
- (id)initWithCursor:convShortId:mediaIds:limit:;
- (id)cursor;
- (id)limit;
- (id)init;
- (void)setLimit:;
- (void)setCursor:;
- (void).cxx_destruct;
- (Class)modelClass;
+ (id)businessURI;
@end
