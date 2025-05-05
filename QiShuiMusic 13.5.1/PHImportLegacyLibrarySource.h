@interface PHImportLegacyLibrarySource : PHImportUrlSource
- (void).cxx_destruct;
- (id)name;
- (BOOL)isLibrary;
- (id)initWithUrls:;
- (BOOL)containsSupportedMediaWithImportExceptions:;
- (BOOL)isReadonlyVolume;
- (void)loadSidecarsFor:;
- (id)productKind;
- (BOOL)canReference;
@end
