@interface CUIMutableCatalog : CUICatalog
- (id)init;
- (void)dealloc;
- (id)_baseImageKeyForName:;
- (id)initWithName:;
- (unsigned long long)_storageRefForRendition:representsODRContent:;
- (void)removeImageNamed:scale:idiom:subtype:;
- (id)initWithName:fromBundle:error:;
- (void)insertCGImage:name:scale:idiom:subtype:;
- (void)removeImageNamed:withDescription:;
- (void)removeImagesNamed:;
- (void)insertCGImage:withName:andDescription:;
- (id)_baseKeyForName:;
@end
