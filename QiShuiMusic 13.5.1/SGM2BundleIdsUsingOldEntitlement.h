@interface SGM2BundleIdsUsingOldEntitlement : PBCodable
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) NSString bundleId;
- (BOOL)hasKey;
- (BOOL)hasBundleId;
- (id)bundleId;
- (id)key;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setKey:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setBundleId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
