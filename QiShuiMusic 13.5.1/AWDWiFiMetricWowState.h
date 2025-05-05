@interface AWDWiFiMetricWowState : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasIsWowEnabled;
@property (nonatomic) BOOL isWowEnabled;
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
- (BOOL)isWowEnabled;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setIsWowEnabled:;
- (void)setHasIsWowEnabled:;
- (BOOL)hasIsWowEnabled;
@end
