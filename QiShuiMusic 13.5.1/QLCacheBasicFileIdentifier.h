@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier
@property (nonatomic) Q fileId;
@property (nonatomic) {fsid=[2i]} fsid;
- (id)fsid;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithFileURL:error:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)fileId;
- (id)initWithFileId:fsid:;
+ (BOOL)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
@end
