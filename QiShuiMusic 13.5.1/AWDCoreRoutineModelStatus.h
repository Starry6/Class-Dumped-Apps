@interface AWDCoreRoutineModelStatus : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
- (void)setHasEnabled:;
- (BOOL)hasEnabled;
- (BOOL)enabled;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setEnabled:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
