@interface QLCacheVersionedFileIdentifier : NSObject
@property (nonatomic) QLCacheFileIdentifier fileIdentifier;
@property (nonatomic) QLThumbnailVersion version;
- (id)version;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)fileIdentifier;
- (id)initWithFileIdentifier:version:;
+ (BOOL)supportsSecureCoding;
+ (id)versionedFileIdentifierWithThumbnailRequest:;
@end
