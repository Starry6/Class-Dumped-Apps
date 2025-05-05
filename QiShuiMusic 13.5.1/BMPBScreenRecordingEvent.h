@interface BMPBScreenRecordingEvent : PBCodable
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)setHasIsStart:;
- (void)setIsStart:;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)isStart;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsStart;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
