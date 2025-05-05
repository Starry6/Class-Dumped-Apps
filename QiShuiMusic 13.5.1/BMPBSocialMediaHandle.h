@interface BMPBSocialMediaHandle : PBCodable
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) NSString bundleId;
@property (nonatomic) BOOL hasHandle;
@property (nonatomic) NSString handle;
- (BOOL)hasBundleId;
- (id)bundleId;
- (id)handle;
- (void)setHandle:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasHandle;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setBundleId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
