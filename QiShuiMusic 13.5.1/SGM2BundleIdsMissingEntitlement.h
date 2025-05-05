@interface SGM2BundleIdsMissingEntitlement : PBCodable
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasBundleId;
@property (nonatomic) NSString bundleId;
@property (nonatomic) BOOL hasEntitlement;
@property (nonatomic) NSString entitlement;
- (BOOL)hasKey;
- (BOOL)hasBundleId;
- (void)setEntitlement:;
- (id)bundleId;
- (BOOL)hasEntitlement;
- (id)key;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setKey:;
- (void).cxx_destruct;
- (id)entitlement;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setBundleId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
