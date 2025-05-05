@interface AWDSpringBoardBiometricUnlock : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasMachTimestampInMilliseconds;
@property (nonatomic) Q machTimestampInMilliseconds;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMachTimestampInMilliseconds:;
- (void)setHasMachTimestampInMilliseconds:;
- (BOOL)hasMachTimestampInMilliseconds;
- (unsigned long long)machTimestampInMilliseconds;
@end
