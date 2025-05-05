@interface AWDCoreRoutineModelClusterMovementInstance : PBCodable
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) Q distance;
- (unsigned long long)distance;
- (void)setDistance:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)hasDistance;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasDistance:;
- (id)copyWithZone:;
@end
