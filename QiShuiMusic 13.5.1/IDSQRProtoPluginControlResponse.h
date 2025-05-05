@interface IDSQRProtoPluginControlResponse : PBCodable
@property (nonatomic) BOOL hasPluginParticipantId;
@property (nonatomic) Q pluginParticipantId;
@property (nonatomic) BOOL hasPluginServerCertHostname;
@property (nonatomic) NSString pluginServerCertHostname;
@property (nonatomic) BOOL hasPluginServerCertOid;
@property (nonatomic) NSString pluginServerCertOid;
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
- (void)setPluginParticipantId:;
- (void)setHasPluginParticipantId:;
- (BOOL)hasPluginParticipantId;
- (BOOL)hasPluginServerCertHostname;
- (BOOL)hasPluginServerCertOid;
- (unsigned long long)pluginParticipantId;
- (id)pluginServerCertHostname;
- (void)setPluginServerCertHostname:;
- (id)pluginServerCertOid;
- (void)setPluginServerCertOid:;
@end
