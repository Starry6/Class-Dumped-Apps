@interface AWDWiFiDPSCountersSample : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasControllerStats;
@property (nonatomic) AWDWiFiNWActivityControllerStats controllerStats;
@property (nonatomic) BOOL hasPeerStats;
@property (nonatomic) AWDWiFiNWActivityPeerStats peerStats;
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
- (BOOL)hasControllerStats;
- (BOOL)hasPeerStats;
- (id)controllerStats;
- (void)setControllerStats:;
- (id)peerStats;
- (void)setPeerStats:;
@end
