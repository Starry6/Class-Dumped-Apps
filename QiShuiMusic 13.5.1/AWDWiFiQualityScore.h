@interface AWDWiFiQualityScore : PBCodable
@property (nonatomic) BOOL hasChannelQuality;
@property (nonatomic) I channelQuality;
@property (nonatomic) BOOL hasTxLoss;
@property (nonatomic) I txLoss;
@property (nonatomic) BOOL hasRxLoss;
@property (nonatomic) I rxLoss;
@property (nonatomic) BOOL hasTxLatency;
@property (nonatomic) I txLatency;
@property (nonatomic) BOOL hasRxLatency;
@property (nonatomic) I rxLatency;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setChannelQuality:;
- (void)setHasChannelQuality:;
- (BOOL)hasChannelQuality;
- (void)setTxLoss:;
- (void)setHasTxLoss:;
- (BOOL)hasTxLoss;
- (void)setRxLoss:;
- (void)setHasRxLoss:;
- (BOOL)hasRxLoss;
- (void)setTxLatency:;
- (void)setHasTxLatency:;
- (BOOL)hasTxLatency;
- (void)setRxLatency:;
- (void)setHasRxLatency:;
- (BOOL)hasRxLatency;
- (unsigned int)channelQuality;
- (unsigned int)txLoss;
- (unsigned int)rxLoss;
- (unsigned int)txLatency;
- (unsigned int)rxLatency;
@end
