@interface TRIMLRuntimeDimensions : PBCodable
@property (nonatomic) BOOL hasUnderlyingDomainCode;
@property (nonatomic) NSString underlyingDomainCode;
@property (nonatomic) BOOL hasPluginId;
@property (nonatomic) NSString pluginId;
@property (nonatomic) BOOL hasCrashPrefixHash;
@property (nonatomic) NSString crashPrefixHash;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)pluginId;
- (BOOL)hasPluginId;
- (BOOL)hasUnderlyingDomainCode;
- (BOOL)hasCrashPrefixHash;
- (id)underlyingDomainCode;
- (void)setUnderlyingDomainCode:;
- (void)setPluginId:;
- (id)crashPrefixHash;
- (void)setCrashPrefixHash:;
@end
