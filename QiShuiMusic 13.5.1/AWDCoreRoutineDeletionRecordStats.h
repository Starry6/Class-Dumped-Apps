@interface AWDCoreRoutineDeletionRecordStats : PBCodable
@property (nonatomic) BOOL hasAgeInDays;
@property (nonatomic) I ageInDays;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAgeInDays:;
- (void)setHasAgeInDays:;
- (BOOL)hasAgeInDays;
- (unsigned int)ageInDays;
@end
