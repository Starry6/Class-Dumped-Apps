@interface AWDIDSMagnetDataCorruptionRecoveryTimeInMs : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasRecoveryTimeInMs;
@property (nonatomic) q recoveryTimeInMs;
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
- (long long)recoveryTimeInMs;
- (void)setRecoveryTimeInMs:;
- (void)setHasRecoveryTimeInMs:;
- (BOOL)hasRecoveryTimeInMs;
@end
