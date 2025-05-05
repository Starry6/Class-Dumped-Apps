@interface IDSQRProtoPluginControlIndication : PBCodable
@property (nonatomic) I pluginOperation;
@property (nonatomic) Q pluginParticipantId;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) Q txnId;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setPluginParticipantId:;
- (unsigned long long)pluginParticipantId;
- (void)setTxnId:;
- (void)setHasTxnId:;
- (BOOL)hasTxnId;
- (unsigned long long)txnId;
- (unsigned int)pluginOperation;
- (void)setPluginOperation:;
@end
