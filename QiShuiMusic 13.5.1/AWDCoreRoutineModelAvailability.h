@interface AWDCoreRoutineModelAvailability : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasAvailability;
@property (nonatomic) NSInteger availability;
@property (nonatomic) BOOL hasPrecisionRecall;
@property (nonatomic) I precisionRecall;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (int)availability;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setAvailability:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasAvailability:;
- (BOOL)hasAvailability;
- (void)setPrecisionRecall:;
- (void)setHasPrecisionRecall:;
- (BOOL)hasPrecisionRecall;
- (unsigned int)precisionRecall;
@end
