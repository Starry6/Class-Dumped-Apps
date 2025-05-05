@interface SASExpressSettingsPrivacyBundle : PBCodable
@property (nonatomic) NSString identifier;
@property (nonatomic) Q contentVersion;
- (unsigned long long)contentVersion;
- (id)identifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setContentVersion:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
