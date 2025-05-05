@interface IDSQRProtoPutMaterialErrorIndication : PBCodable
@property (nonatomic) Q receiverParticipantId;
@property (nonatomic) IDSQRProtoMaterialOwner materialOwner;
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
- (unsigned long long)receiverParticipantId;
- (void)setReceiverParticipantId:;
- (id)materialOwner;
- (void)setMaterialOwner:;
@end
