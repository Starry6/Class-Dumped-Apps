@interface AWEEditAlbumImportConfig : NSObject
@property (nonatomic) BOOL onlySupportPhotoImport;
@property (nonatomic) BOOL supportPhotoImport;
@property (nonatomic) BOOL supportLivePhotoImport;
@property (nonatomic) BOOL supportVideoImport;
- (BOOL)onlySupportPhotoImport;
- (void)setOnlySupportPhotoImport:;
- (BOOL)supportPhotoImport;
- (void)setSupportPhotoImport:;
- (BOOL)supportLivePhotoImport;
- (void)setSupportLivePhotoImport:;
- (BOOL)supportVideoImport;
- (void)setSupportVideoImport:;
- (id)init;
@end
