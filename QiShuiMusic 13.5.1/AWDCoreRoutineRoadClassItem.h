@interface AWDCoreRoutineRoadClassItem : PBCodable
@property (nonatomic) BOOL hasRoadClass;
@property (nonatomic) NSInteger roadClass;
@property (nonatomic) BOOL hasPercentage;
@property (nonatomic) NSInteger percentage;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (int)roadClass;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)percentage;
- (void)setRoadClass:;
- (void)setHasRoadClass:;
- (BOOL)hasRoadClass;
- (BOOL)hasPercentage;
- (void)setHasPercentage:;
- (void)setPercentage:;
@end
