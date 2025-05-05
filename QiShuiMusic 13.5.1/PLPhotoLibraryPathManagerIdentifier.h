@interface PLPhotoLibraryPathManagerIdentifier : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) C bundleFormat;
- (id)initWithPathManager:;
- (unsigned char)bundleFormat;
- (id)identifier;
- (unsigned long long)hash;
- (BOOL)isEqualToPathManagerIdentifier:;
- (void).cxx_destruct;
- (void)setBundleFormat:;
- (id)description;
- (id)initWithLibraryID:libraryFormat:;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
