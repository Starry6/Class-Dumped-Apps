@interface NSManagedObjectModelBundle : NSObject
- (void)dealloc;
- (id)currentVersion;
- (id)urlForModelVersionWithName:;
- (id)_modelForVersionHashes:;
- (id)modelVersions;
- (id)optimizedVersionURL;
- (id)initWithPath:;
- (id)_modelForVersionHashes:inStyle:;
- (id)currentVersionURL;
@end
