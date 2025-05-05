@interface FPSearchableItemVersion : PBCodable
@property (nonatomic) BOOL hasContentVersion;
@property (nonatomic) NSData contentVersion;
@property (nonatomic) BOOL hasMetadataVersion;
@property (nonatomic) NSData metadataVersion;
- (id)contentVersion;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setContentVersion:;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)metadataVersion;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMetadataVersion:;
- (BOOL)hasContentVersion;
- (BOOL)hasMetadataVersion;
+ (id)stringFromVersion:;
+ (id)versionFromString:;
@end
