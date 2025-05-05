@interface SCNKeyedUnarchiver : NSKeyedUnarchiver
@property (nonatomic) NSArray allTargetsFromAnimCodec;
@property (nonatomic) NSURL documentURL;
@property (nonatomic) NSDictionary context;
@property (nonatomic) SCNAssetCatalog assetCatalog;
@property (nonatomic) NSString lookUpKey;
@property (nonatomic) @ lookUpFoundInstance;
@property (nonatomic) NSURL documentEnclosingURL;
- (void)dealloc;
- (id)context;
- (void)setContext:;
- (id)documentURL;
- (void)setDocumentURL:;
- (id)documentEnclosingURL;
- (id)initForReadingWithData:secure:;
- (id)assetCatalog;
- (void)setAssetCatalog:;
- (id)lookUpKey;
- (void)setLookUpKey:;
- (id)lookUpFoundInstance;
- (void)setLookUpFoundInstance:;
- (id)allTargetsFromAnimCodec;
- (void)setAllTargetsFromAnimCodec:;
@end
