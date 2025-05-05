@interface AWDWiFiMetricsManagerLastSSIDInfo : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasLastSSIDAttempted;
@property (nonatomic) NSData lastSSIDAttempted;
@property (nonatomic) BOOL hasLastSSIDConnectedTo;
@property (nonatomic) NSData lastSSIDConnectedTo;
- (void)dealloc;
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
- (BOOL)hasLastSSIDAttempted;
- (BOOL)hasLastSSIDConnectedTo;
- (id)lastSSIDAttempted;
- (void)setLastSSIDAttempted:;
- (id)lastSSIDConnectedTo;
- (void)setLastSSIDConnectedTo:;
@end
