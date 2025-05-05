@interface AWDWiFiNWActivityMpduLost : PBCodable
@property (nonatomic) BOOL hasBALost;
@property (nonatomic) AWDWiFiNWActivityMpduWME bALost;
@property (nonatomic) BOOL hasNonBALost;
@property (nonatomic) AWDWiFiNWActivityMpduWME nonBALost;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasBALost;
- (BOOL)hasNonBALost;
- (id)bALost;
- (void)setBALost:;
- (id)nonBALost;
- (void)setNonBALost:;
@end
