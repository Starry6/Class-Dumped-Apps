@interface IDSQRProtoMaterial : PBCodable
@property (nonatomic) Q ownerParticipantId;
@property (nonatomic) Q receiverParticipantId;
@property (nonatomic) NSMutableArray materialInfos;
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
- (void)clearMaterialInfos;
- (void)addMaterialInfo:;
- (unsigned long long)materialInfosCount;
- (id)materialInfoAtIndex:;
- (unsigned long long)ownerParticipantId;
- (void)setOwnerParticipantId:;
- (unsigned long long)receiverParticipantId;
- (void)setReceiverParticipantId:;
- (id)materialInfos;
- (void)setMaterialInfos:;
+ (Class)materialInfoType;
@end
