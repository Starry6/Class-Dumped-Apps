@interface PHImportLibrarySource : PHImportUrlSource
@property (nonatomic) PLPhotoLibraryPathManager pathManager;
- (id)pathManager;
- (void)setPathManager:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isLibrary;
- (id)initWithUrls:;
- (BOOL)containsSupportedMediaWithImportExceptions:;
- (void)loadSidecarsFor:;
- (id)productKind;
- (BOOL)canReference;
- (void)beginProcessingWithCompletion:;
- (id)assetsByProcessingItem:;
- (id)_resourcePathsByUuidForPaths:;
- (BOOL)_isValidPhotoLibraryWithError:;
+ (id)importLibrarySourceForURL:exceptions:;
+ (id)supportedImportLibraryTypes;
+ (BOOL)_isValidPhotoLibrary:error:;
@end
