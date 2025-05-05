@interface IDSQRProtoMaterialOwner : PBCodable
@property (nonatomic) Q participantId;
@property (nonatomic) Q materialTypesCount;
@property (nonatomic) ^i materialTypes;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)materialTypesCount;
- (id)materialTypes;
- (void)clearMaterialTypes;
- (void)addMaterialType:;
- (int)materialTypeAtIndex:;
- (void)setMaterialTypes:count:;
- (id)materialTypesAsString:;
- (int)StringAsMaterialTypes:;
- (unsigned long long)participantId;
- (void)setParticipantId:;
@end
