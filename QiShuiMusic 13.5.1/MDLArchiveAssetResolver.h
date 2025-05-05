@interface MDLArchiveAssetResolver : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithURL:;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (BOOL)canResolveAssetNamed:;
- (id)resolveAssetNamed:;
- (void)addResolvedAssetNamed:offset:fileSize:;
- (id)resolveInsideArchiveWithAssetNamed:;
- (id)assetNamesInArchive;
- (void)removeAssetNamed:;
@end
