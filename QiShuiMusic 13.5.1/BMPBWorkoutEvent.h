@interface BMPBWorkoutEvent : PBCodable
@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
- (void)setStarting:;
- (BOOL)hasStarting;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)starting;
- (BOOL)readFrom:;
- (id)description;
- (void)setHasStarting:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
