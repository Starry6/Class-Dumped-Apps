@interface CKDPRecordIdentifier : PBCodable
@property (nonatomic) BOOL hasValue;
@property (nonatomic) CKDPIdentifier value;
@property (nonatomic) BOOL hasZoneIdentifier;
@property (nonatomic) CKDPRecordZoneIdentifier zoneIdentifier;
- (BOOL)hasValue;
- (void)setZoneIdentifier:;
- (BOOL)hasZoneIdentifier;
- (void)writeTo:;
- (id)zoneIdentifier;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setValue:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)value;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
