@interface AWDIDSConnectedAfterPipeConnectedTimeInMs : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasConnectionTimeInMs;
@property (nonatomic) q connectionTimeInMs;
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
- (void)setConnectionTimeInMs:;
- (void)setHasConnectionTimeInMs:;
- (BOOL)hasConnectionTimeInMs;
- (long long)connectionTimeInMs;
@end
