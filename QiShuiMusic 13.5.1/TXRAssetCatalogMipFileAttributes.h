@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes
@property (nonatomic) Q level;
@property (nonatomic) Q face;
- (void)setLevel:;
- (id)init;
- (unsigned long long)level;
- (void)setFace:;
- (unsigned long long)face;
- (void)specifyAllFaces;
- (BOOL)doesSpecifyAllFaces;
@end
