@interface PLPhotoLibraryFileIdentifier : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) S bundleScope;
@property (nonatomic) NSString uti;
@property (nonatomic) NSString originalFilename;
@property (nonatomic) I resourceType;
@property (nonatomic) I resourceVersion;
@property (nonatomic) I recipeId;
@property (nonatomic) BOOL isData;
- (unsigned short)bundleScope;
- (BOOL)isData;
- (id)init;
- (unsigned int)resourceVersion;
- (id)uuid;
- (unsigned int)resourceType;
- (id)extension;
- (void)setUuid:;
- (id)uti;
- (id)originalFilename;
- (void).cxx_destruct;
- (id)description;
- (void)setUti:;
- (id)initWithAssetUuid:bundleScope:uti:resourceVersion:recipeID:;
- (id)initWithAssetUuid:bundleScope:uti:resourceVersion:resourceType:;
- (id)initWithAssetUuid:bundleScope:uti:resourceVersion:resourceType:recipeID:originalFilename:;
- (void)setOriginalFilename:;
- (unsigned int)recipeId;
+ (id)uuidFromURL:;
+ (BOOL)isValidFileIdentifierParametersForUUID:utiString:originalFilename:;
+ (BOOL)isValidOriginalURL:;
+ (id)fileIdentifierForValidOriginalURL:;
+ (id)fileIdentifierForValidOriginalURL:originalsDirectoryName:;
@end
