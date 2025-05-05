@interface AWDCoreRoutineModelLength : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) I length;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (BOOL)hasLength;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setHasLength:;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned int)length;
- (id)dictionaryRepresentation;
- (void)setLength:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
