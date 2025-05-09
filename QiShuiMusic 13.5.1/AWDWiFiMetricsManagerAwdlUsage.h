@interface AWDWiFiMetricsManagerAwdlUsage : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasSelfInfraChannel;
@property (nonatomic) I selfInfraChannel;
@property (nonatomic) BOOL hasPeerInfraChannel;
@property (nonatomic) I peerInfraChannel;
@property (nonatomic) BOOL hasNumOfPeers;
@property (nonatomic) I numOfPeers;
@property (nonatomic) BOOL hasNumOfCachedPeers;
@property (nonatomic) I numOfCachedPeers;
@property (nonatomic) BOOL hasCachedPeersOn24G;
@property (nonatomic) I cachedPeersOn24G;
@property (nonatomic) BOOL hasCachedPeersOn5G;
@property (nonatomic) I cachedPeersOn5G;
@property (nonatomic) BOOL hasCachedPeersOnDFS;
@property (nonatomic) I cachedPeersOnDFS;
@property (nonatomic) BOOL hasCachedPeersNotAssociated;
@property (nonatomic) I cachedPeersNotAssociated;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) I flags;
@property (nonatomic) BOOL hasIfPacketFailures;
@property (nonatomic) I ifPacketFailures;
@property (nonatomic) BOOL hasIfRxBytes;
@property (nonatomic) I ifRxBytes;
@property (nonatomic) BOOL hasIfTxBytes;
@property (nonatomic) I ifTxBytes;
@property (nonatomic) BOOL hasAppRxBytes;
@property (nonatomic) I appRxBytes;
@property (nonatomic) BOOL hasAppTxBytes;
@property (nonatomic) I appTxBytes;
@property (nonatomic) BOOL hasPeriodInMinutes;
@property (nonatomic) I periodInMinutes;
@property (nonatomic) NSMutableArray states;
@property (nonatomic) BOOL hasNoServiceIdleTime;
@property (nonatomic) Q noServiceIdleTime;
@property (nonatomic) BOOL hasBrowseAddTotalCount;
@property (nonatomic) I browseAddTotalCount;
@property (nonatomic) BOOL hasBrowseAddFilteredCount;
@property (nonatomic) I browseAddFilteredCount;
@property (nonatomic) BOOL hasBrowseDeleteTotalCount;
@property (nonatomic) I browseDeleteTotalCount;
@property (nonatomic) BOOL hasBrowseDeleteFilteredCount;
@property (nonatomic) I browseDeleteFilteredCount;
@property (nonatomic) BOOL hasAdvertiseAddTotalCount;
@property (nonatomic) I advertiseAddTotalCount;
@property (nonatomic) BOOL hasAdvertiseAddFilteredCount;
@property (nonatomic) I advertiseAddFilteredCount;
@property (nonatomic) BOOL hasAdvertiseDeleteTotalCount;
@property (nonatomic) I advertiseDeleteTotalCount;
@property (nonatomic) BOOL hasAdvertiseDeleteFilteredCount;
@property (nonatomic) I advertiseDeleteFilteredCount;
@property (nonatomic) NSMutableArray services;
@property (nonatomic) BOOL hasCachedPeersSameInfra;
@property (nonatomic) I cachedPeersSameInfra;
@property (nonatomic) BOOL hasCachedPeersDifferentInfra;
@property (nonatomic) I cachedPeersDifferentInfra;
@property (nonatomic) BOOL hasDfspCSAReceivedFromPeer;
@property (nonatomic) I dfspCSAReceivedFromPeer;
@property (nonatomic) BOOL hasDfspCSAReceivedFromAP;
@property (nonatomic) I dfspCSAReceivedFromAP;
@property (nonatomic) BOOL hasDfspSuspect;
@property (nonatomic) I dfspSuspect;
@property (nonatomic) BOOL hasDfspResume;
@property (nonatomic) I dfspResume;
@property (nonatomic) BOOL hasDfspAirplayConnected;
@property (nonatomic) I dfspAirplayConnected;
@property (nonatomic) BOOL hasDfspAirplayFailed;
@property (nonatomic) I dfspAirplayFailed;
@property (nonatomic) NSMutableArray hopCountHistograms;
@property (nonatomic) NSMutableArray parentRssiHistograms;
@property (nonatomic) BOOL hasSyncChangesCount;
@property (nonatomic) Q syncChangesCount;
@property (nonatomic) BOOL hasNumAirplaySessions;
@property (nonatomic) I numAirplaySessions;
@property (nonatomic) BOOL hasNumDynSdbAirplayAllowed;
@property (nonatomic) I numDynSdbAirplayAllowed;
@property (nonatomic) BOOL hasNumDynSdbEntrySuccess;
@property (nonatomic) I numDynSdbEntrySuccess;
@property (nonatomic) BOOL hasNumDynSdbExitDueToRate;
@property (nonatomic) I numDynSdbExitDueToRate;
@property (nonatomic) BOOL hasNumDynSdbReEntrySuccess;
@property (nonatomic) I numDynSdbReEntrySuccess;
@property (nonatomic) BOOL hasD2dMigrationStats;
@property (nonatomic) AWDWifiAwdlD2dMigrationStats d2dMigrationStats;
@property (nonatomic) BOOL hasSelfInfraChannelFlags;
@property (nonatomic) I selfInfraChannelFlags;
@property (nonatomic) BOOL hasPeerInfraChannelFlags;
@property (nonatomic) I peerInfraChannelFlags;
@property (nonatomic) BOOL hasCachedPeersOnOther;
@property (nonatomic) I cachedPeersOnOther;
@property (nonatomic) BOOL hasSelfCapOther;
@property (nonatomic) I selfCapOther;
@property (nonatomic) BOOL hasCachedPeersCapOther;
@property (nonatomic) I cachedPeersCapOther;
- (void)setHasFlags:;
- (id)states;
- (BOOL)hasFlags;
- (void)setServices:;
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
- (void)setStates:;
- (id)description;
- (void)setFlags:;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (id)services;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearStates;
- (void)addStates:;
- (unsigned long long)statesCount;
- (id)statesAtIndex:;
- (unsigned long long)servicesCount;
- (void)setSelfInfraChannel:;
- (void)setHasSelfInfraChannel:;
- (BOOL)hasSelfInfraChannel;
- (void)setSelfInfraChannelFlags:;
- (void)setHasSelfInfraChannelFlags:;
- (BOOL)hasSelfInfraChannelFlags;
- (unsigned int)selfInfraChannel;
- (unsigned int)selfInfraChannelFlags;
- (void)setPeerInfraChannel:;
- (void)setHasPeerInfraChannel:;
- (BOOL)hasPeerInfraChannel;
- (void)setNumOfPeers:;
- (void)setHasNumOfPeers:;
- (BOOL)hasNumOfPeers;
- (void)setNumOfCachedPeers:;
- (void)setHasNumOfCachedPeers:;
- (BOOL)hasNumOfCachedPeers;
- (void)setCachedPeersOn24G:;
- (void)setHasCachedPeersOn24G:;
- (BOOL)hasCachedPeersOn24G;
- (void)setCachedPeersOn5G:;
- (void)setHasCachedPeersOn5G:;
- (BOOL)hasCachedPeersOn5G;
- (void)setCachedPeersOnDFS:;
- (void)setHasCachedPeersOnDFS:;
- (BOOL)hasCachedPeersOnDFS;
- (void)setCachedPeersNotAssociated:;
- (void)setHasCachedPeersNotAssociated:;
- (BOOL)hasCachedPeersNotAssociated;
- (void)setIfPacketFailures:;
- (void)setHasIfPacketFailures:;
- (BOOL)hasIfPacketFailures;
- (void)setIfRxBytes:;
- (void)setHasIfRxBytes:;
- (BOOL)hasIfRxBytes;
- (void)setIfTxBytes:;
- (void)setHasIfTxBytes:;
- (BOOL)hasIfTxBytes;
- (void)setAppRxBytes:;
- (void)setHasAppRxBytes:;
- (BOOL)hasAppRxBytes;
- (void)setAppTxBytes:;
- (void)setHasAppTxBytes:;
- (BOOL)hasAppTxBytes;
- (void)setPeriodInMinutes:;
- (void)setHasPeriodInMinutes:;
- (BOOL)hasPeriodInMinutes;
- (void)setNoServiceIdleTime:;
- (void)setHasNoServiceIdleTime:;
- (BOOL)hasNoServiceIdleTime;
- (void)setBrowseAddTotalCount:;
- (void)setHasBrowseAddTotalCount:;
- (BOOL)hasBrowseAddTotalCount;
- (void)setBrowseAddFilteredCount:;
- (void)setHasBrowseAddFilteredCount:;
- (BOOL)hasBrowseAddFilteredCount;
- (void)setBrowseDeleteTotalCount:;
- (void)setHasBrowseDeleteTotalCount:;
- (BOOL)hasBrowseDeleteTotalCount;
- (void)setBrowseDeleteFilteredCount:;
- (void)setHasBrowseDeleteFilteredCount:;
- (BOOL)hasBrowseDeleteFilteredCount;
- (void)setAdvertiseAddTotalCount:;
- (void)setHasAdvertiseAddTotalCount:;
- (BOOL)hasAdvertiseAddTotalCount;
- (void)setAdvertiseAddFilteredCount:;
- (void)setHasAdvertiseAddFilteredCount:;
- (BOOL)hasAdvertiseAddFilteredCount;
- (void)setAdvertiseDeleteTotalCount:;
- (void)setHasAdvertiseDeleteTotalCount:;
- (BOOL)hasAdvertiseDeleteTotalCount;
- (void)setAdvertiseDeleteFilteredCount:;
- (void)setHasAdvertiseDeleteFilteredCount:;
- (BOOL)hasAdvertiseDeleteFilteredCount;
- (void)clearServices;
- (void)addServices:;
- (id)servicesAtIndex:;
- (void)setCachedPeersSameInfra:;
- (void)setHasCachedPeersSameInfra:;
- (BOOL)hasCachedPeersSameInfra;
- (void)setCachedPeersDifferentInfra:;
- (void)setHasCachedPeersDifferentInfra:;
- (BOOL)hasCachedPeersDifferentInfra;
- (void)setDfspCSAReceivedFromPeer:;
- (void)setHasDfspCSAReceivedFromPeer:;
- (BOOL)hasDfspCSAReceivedFromPeer;
- (void)setDfspCSAReceivedFromAP:;
- (void)setHasDfspCSAReceivedFromAP:;
- (BOOL)hasDfspCSAReceivedFromAP;
- (void)setDfspSuspect:;
- (void)setHasDfspSuspect:;
- (BOOL)hasDfspSuspect;
- (void)setDfspResume:;
- (void)setHasDfspResume:;
- (BOOL)hasDfspResume;
- (void)setDfspAirplayConnected:;
- (void)setHasDfspAirplayConnected:;
- (BOOL)hasDfspAirplayConnected;
- (void)setDfspAirplayFailed:;
- (void)setHasDfspAirplayFailed:;
- (BOOL)hasDfspAirplayFailed;
- (void)clearHopCountHistograms;
- (void)addHopCountHistogram:;
- (unsigned long long)hopCountHistogramsCount;
- (id)hopCountHistogramAtIndex:;
- (void)clearParentRssiHistograms;
- (void)addParentRssiHistogram:;
- (unsigned long long)parentRssiHistogramsCount;
- (id)parentRssiHistogramAtIndex:;
- (void)setSyncChangesCount:;
- (void)setHasSyncChangesCount:;
- (BOOL)hasSyncChangesCount;
- (void)setNumAirplaySessions:;
- (void)setHasNumAirplaySessions:;
- (BOOL)hasNumAirplaySessions;
- (void)setNumDynSdbAirplayAllowed:;
- (void)setHasNumDynSdbAirplayAllowed:;
- (BOOL)hasNumDynSdbAirplayAllowed;
- (void)setNumDynSdbEntrySuccess:;
- (void)setHasNumDynSdbEntrySuccess:;
- (BOOL)hasNumDynSdbEntrySuccess;
- (void)setNumDynSdbExitDueToRate:;
- (void)setHasNumDynSdbExitDueToRate:;
- (BOOL)hasNumDynSdbExitDueToRate;
- (void)setNumDynSdbReEntrySuccess:;
- (void)setHasNumDynSdbReEntrySuccess:;
- (BOOL)hasNumDynSdbReEntrySuccess;
- (BOOL)hasD2dMigrationStats;
- (void)setPeerInfraChannelFlags:;
- (void)setHasPeerInfraChannelFlags:;
- (BOOL)hasPeerInfraChannelFlags;
- (void)setCachedPeersOnOther:;
- (void)setHasCachedPeersOnOther:;
- (BOOL)hasCachedPeersOnOther;
- (void)setSelfCapOther:;
- (void)setHasSelfCapOther:;
- (BOOL)hasSelfCapOther;
- (void)setCachedPeersCapOther:;
- (void)setHasCachedPeersCapOther:;
- (BOOL)hasCachedPeersCapOther;
- (unsigned int)peerInfraChannel;
- (unsigned int)numOfPeers;
- (unsigned int)numOfCachedPeers;
- (unsigned int)cachedPeersOn24G;
- (unsigned int)cachedPeersOn5G;
- (unsigned int)cachedPeersOnDFS;
- (unsigned int)cachedPeersNotAssociated;
- (unsigned int)ifPacketFailures;
- (unsigned int)ifRxBytes;
- (unsigned int)ifTxBytes;
- (unsigned int)appRxBytes;
- (unsigned int)appTxBytes;
- (unsigned int)periodInMinutes;
- (unsigned long long)noServiceIdleTime;
- (unsigned int)browseAddTotalCount;
- (unsigned int)browseAddFilteredCount;
- (unsigned int)browseDeleteTotalCount;
- (unsigned int)browseDeleteFilteredCount;
- (unsigned int)advertiseAddTotalCount;
- (unsigned int)advertiseAddFilteredCount;
- (unsigned int)advertiseDeleteTotalCount;
- (unsigned int)advertiseDeleteFilteredCount;
- (unsigned int)cachedPeersSameInfra;
- (unsigned int)cachedPeersDifferentInfra;
- (unsigned int)dfspCSAReceivedFromPeer;
- (unsigned int)dfspCSAReceivedFromAP;
- (unsigned int)dfspSuspect;
- (unsigned int)dfspResume;
- (unsigned int)dfspAirplayConnected;
- (unsigned int)dfspAirplayFailed;
- (id)hopCountHistograms;
- (void)setHopCountHistograms:;
- (id)parentRssiHistograms;
- (void)setParentRssiHistograms:;
- (unsigned long long)syncChangesCount;
- (unsigned int)numAirplaySessions;
- (unsigned int)numDynSdbAirplayAllowed;
- (unsigned int)numDynSdbEntrySuccess;
- (unsigned int)numDynSdbExitDueToRate;
- (unsigned int)numDynSdbReEntrySuccess;
- (id)d2dMigrationStats;
- (void)setD2dMigrationStats:;
- (unsigned int)peerInfraChannelFlags;
- (unsigned int)cachedPeersOnOther;
- (unsigned int)selfCapOther;
- (unsigned int)cachedPeersCapOther;
+ (Class)statesType;
+ (Class)servicesType;
+ (Class)hopCountHistogramType;
+ (Class)parentRssiHistogramType;
@end
