@interface AWDWiFiMetricsManagerEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) I status;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) I reason;
- (void)setStatus:;
- (BOOL)hasStatus;
- (void)writeTo:;
- (unsigned int)reason;
- (unsigned long long)hash;
- (void)setReason:;
- (void)copyTo:;
- (BOOL)hasReason;
- (void)setHasStatus:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setHasReason:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
