@interface IDSQRProtoPluginControlRequest : PBRequest
@property (nonatomic) I pluginOperation;
@property (nonatomic) NSString pluginName;
@property (nonatomic) BOOL hasPluginStreamId;
@property (nonatomic) I pluginStreamId;
@property (nonatomic) BOOL hasPluginClientRawPublicKey;
@property (nonatomic) NSData pluginClientRawPublicKey;
- (id)pluginName;
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
- (unsigned int)pluginOperation;
- (void)setPluginOperation:;
- (void)setPluginStreamId:;
- (void)setHasPluginStreamId:;
- (BOOL)hasPluginStreamId;
- (BOOL)hasPluginClientRawPublicKey;
- (void)setPluginName:;
- (unsigned int)pluginStreamId;
- (id)pluginClientRawPublicKey;
- (void)setPluginClientRawPublicKey:;
@end
