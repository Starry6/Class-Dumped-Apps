@interface AWDSafariDidTerminateWebProcessBeforeNavigation : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasTerminationReason;
@property (nonatomic) NSInteger terminationReason;
- (int)terminationReason;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (void)setTerminationReason:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasTerminationReason:;
- (BOOL)hasTerminationReason;
- (id)terminationReasonAsString:;
- (int)StringAsTerminationReason:;
@end
