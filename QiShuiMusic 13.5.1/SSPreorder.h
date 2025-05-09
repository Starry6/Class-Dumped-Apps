@interface SSPreorder : NSObject
@property (nonatomic) NSString artistName;
@property (nonatomic) SSItemImageCollection imageCollection;
@property (nonatomic) NSString itemKind;
@property (nonatomic) q persistentIdentifier;
@property (nonatomic) NSDate releaseDate;
@property (nonatomic) NSString releaseDateString;
@property (nonatomic) NSNumber storeAccountIdentifier;
@property (nonatomic) Q storeItemIdentifier;
@property (nonatomic) Q storePreorderIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)artistName;
- (id)initWithXPCEncoding:;
- (id)releaseDate;
- (void)_setTitle:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (unsigned long long)storeItemIdentifier;
- (long long)persistentIdentifier;
- (unsigned long long)hash;
- (id)itemKind;
- (id)title;
- (id)description;
- (BOOL)isEqual:;
- (id)storeAccountIdentifier;
- (id)releaseDateString;
- (id)imageCollection;
- (id)_initWithPersistentIdentifier:;
- (id)copyReleaseDateStringWithStyle:;
- (void)_setArtistName:;
- (void)_setImageCollection:;
- (void)_setItemKind:;
- (void)_setReleaseDate:;
- (void)_setReleaseDateString:;
- (void)_setStoreAccountIdentifier:;
- (void)_setStoreItemIdentifier:;
- (void)_setStorePreorderIdentifier:;
- (unsigned long long)storePreorderIdentifier;
@end
