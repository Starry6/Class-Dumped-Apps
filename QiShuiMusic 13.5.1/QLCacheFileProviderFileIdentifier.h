@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier
@property (nonatomic) FPItemID itemID;
- (id)itemID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithItemID:;
+ (BOOL)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
+ (id)knownFileProviderIdentifiersSoFar;
@end
