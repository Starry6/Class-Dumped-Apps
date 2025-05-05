@interface AWDCpuLoad : PBCodable
@property (nonatomic) BOOL hasProcName;
@property (nonatomic) NSString procName;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) I duration;
- (void)dealloc;
- (BOOL)hasDuration;
- (void)setHasDuration:;
- (id)procName;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setDuration:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setProcName:;
- (BOOL)hasProcName;
@end
