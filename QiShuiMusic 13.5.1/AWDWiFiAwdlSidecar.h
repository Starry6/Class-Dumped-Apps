@interface AWDWiFiAwdlSidecar : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasFgDuration;
@property (nonatomic) Q fgDuration;
@property (nonatomic) BOOL hasBgDuration;
@property (nonatomic) Q bgDuration;
@property (nonatomic) BOOL hasBgEntryCount;
@property (nonatomic) I bgEntryCount;
@property (nonatomic) BOOL hasPeerRssi24G;
@property (nonatomic) NSInteger peerRssi24G;
@property (nonatomic) BOOL hasPeerRssi5G;
@property (nonatomic) NSInteger peerRssi5G;
@property (nonatomic) BOOL hasIsSDB;
@property (nonatomic) BOOL isSDB;
@property (nonatomic) BOOL hasSidecarBssSteering;
@property (nonatomic) AWDSidecarBssSteering sidecarBssSteering;
@property (nonatomic) BOOL hasSidecarPeerTraffic;
@property (nonatomic) AWDSidecarPeerTraffic sidecarPeerTraffic;
@property (nonatomic) BOOL hasDfspState;
@property (nonatomic) I dfspState;
@property (nonatomic) BOOL hasInfraDisconnectedCount;
@property (nonatomic) I infraDisconnectedCount;
@property (nonatomic) Q channelSequencesCount;
@property (nonatomic) ^I channelSequences;
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
- (void)setFgDuration:;
- (void)setHasFgDuration:;
- (BOOL)hasFgDuration;
- (void)setBgDuration:;
- (void)setHasBgDuration:;
- (BOOL)hasBgDuration;
- (void)setBgEntryCount:;
- (void)setHasBgEntryCount:;
- (BOOL)hasBgEntryCount;
- (void)setPeerRssi24G:;
- (void)setHasPeerRssi24G:;
- (BOOL)hasPeerRssi24G;
- (void)setPeerRssi5G:;
- (void)setHasPeerRssi5G:;
- (BOOL)hasPeerRssi5G;
- (void)setIsSDB:;
- (void)setHasIsSDB:;
- (BOOL)hasIsSDB;
- (BOOL)hasSidecarBssSteering;
- (BOOL)hasSidecarPeerTraffic;
- (void)setDfspState:;
- (void)setHasDfspState:;
- (BOOL)hasDfspState;
- (void)setInfraDisconnectedCount:;
- (void)setHasInfraDisconnectedCount:;
- (BOOL)hasInfraDisconnectedCount;
- (unsigned long long)channelSequencesCount;
- (id)channelSequences;
- (void)clearChannelSequences;
- (void)addChannelSequence:;
- (unsigned int)channelSequenceAtIndex:;
- (void)setChannelSequences:count:;
- (unsigned long long)fgDuration;
- (unsigned long long)bgDuration;
- (unsigned int)bgEntryCount;
- (int)peerRssi24G;
- (int)peerRssi5G;
- (BOOL)isSDB;
- (id)sidecarBssSteering;
- (void)setSidecarBssSteering:;
- (id)sidecarPeerTraffic;
- (void)setSidecarPeerTraffic:;
- (unsigned int)dfspState;
- (unsigned int)infraDisconnectedCount;
@end
