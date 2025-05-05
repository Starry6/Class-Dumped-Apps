@interface AWDWiFiRetStats : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasRetDuration;
@property (nonatomic) Q retDuration;
@property (nonatomic) BOOL hasRxDuration;
@property (nonatomic) Q rxDuration;
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
- (void)setRetDuration:;
- (void)setHasRetDuration:;
- (BOOL)hasRetDuration;
- (void)setRxDuration:;
- (void)setHasRxDuration:;
- (BOOL)hasRxDuration;
- (unsigned long long)retDuration;
- (unsigned long long)rxDuration;
@end
