@interface AWDWiFiMetricsManagerStateMachine : PBCodable
@property (nonatomic) BOOL hasStateChanges;
@property (nonatomic) I stateChanges;
@property (nonatomic) BOOL hasStateDuration;
@property (nonatomic) Q stateDuration;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setStateDuration:;
- (void)setHasStateDuration:;
- (BOOL)hasStateDuration;
- (unsigned long long)stateDuration;
- (void)setStateChanges:;
- (void)setHasStateChanges:;
- (BOOL)hasStateChanges;
- (unsigned int)stateChanges;
@end
