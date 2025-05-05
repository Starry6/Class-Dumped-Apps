@interface CKDPRecordReference : PBCodable
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasRecordIdentifier;
@property (nonatomic) CKDPRecordIdentifier recordIdentifier;
- (BOOL)hasRecordIdentifier;
- (int)StringAsType:;
- (id)recordIdentifier;
- (void)setType:;
- (void)writeTo:;
- (void)setHasType:;
- (BOOL)hasType;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)typeAsString:;
- (void)mergeFrom:;
- (void)setRecordIdentifier:;
- (int)type;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
