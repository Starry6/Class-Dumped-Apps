@interface BMPBSchoolTimeEvent : PBCodable
@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) NSInteger reason;
- (void)setStarting:;
- (id)reasonAsString:;
- (BOOL)hasStarting;
- (void)writeTo:;
- (int)reason;
- (unsigned long long)hash;
- (void)setReason:;
- (void)copyTo:;
- (BOOL)hasReason;
- (void)mergeFrom:;
- (BOOL)starting;
- (void)setHasReason:;
- (BOOL)readFrom:;
- (id)description;
- (int)StringAsReason:;
- (void)setHasStarting:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
