@interface AWDCoreRoutineHistogramBin : PBCodable
@property (nonatomic) BOOL hasValue;
@property (nonatomic) I value;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) I count;
- (void)setCount:;
- (BOOL)hasValue;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasValue:;
- (void)mergeFrom:;
- (void)setValue:;
- (BOOL)readFrom:;
- (id)description;
- (unsigned int)value;
- (id)dictionaryRepresentation;
- (unsigned int)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCount:;
- (BOOL)hasCount;
@end
