@interface VCPProtoImageShotTypeResult : PBCodable
@property (nonatomic) NSInteger shotType;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)exportToLegacyDictionary;
- (int)shotType;
- (void)setShotType:;
+ (id)resultFromLegacyDictionary:;
@end
