@interface PLManagedAssetID : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString filename;
@property (nonatomic) NSString directory;
@property (nonatomic) PLPhotoLibraryPathManagerIdentifier libraryID;
@property (nonatomic) S bundleScope;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned short)bundleScope;
- (void)setBundleScope:;
- (id)libraryID;
- (id)filename;
- (void)setDirectory:;
- (id)directory;
- (id)initWithManagedAsset:;
- (id)uuid;
- (void)setUuid:;
- (void)setFilename:;
- (id)initWithUUID:filename:directory:libraryID:bundleScope:;
- (void).cxx_destruct;
- (void)setLibraryID:;
@end
