@interface AWDCoreRoutineLocationTypeItem : PBCodable
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) NSInteger locationType;
@property (nonatomic) BOOL hasPercentage;
@property (nonatomic) NSInteger percentage;
- (int)locationType;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHasLocationType:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setLocationType:;
- (BOOL)hasLocationType;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)percentage;
- (BOOL)hasPercentage;
- (void)setHasPercentage:;
- (void)setPercentage:;
@end
