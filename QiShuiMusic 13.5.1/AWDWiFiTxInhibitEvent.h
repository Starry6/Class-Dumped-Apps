@interface AWDWiFiTxInhibitEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) Q version;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL state;
- (void)setHasVersion:;
- (void)setState:;
- (void)setVersion:;
- (unsigned long long)version;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasVersion;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)state;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasState;
- (void)setHasState:;
@end
