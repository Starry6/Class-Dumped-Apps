@interface VCConnectionManager : NSObject
@property (nonatomic) <VCConnectionProtocol> lastPrimaryConnectionInUse;
@property (nonatomic) I callID;
@property (nonatomic) NSInteger relayServerProvider;
@property (nonatomic) BOOL isPreWarmStateEnabled;
@property (nonatomic) BOOL remotePreWarmStateEnabled;
@property (nonatomic) C preferredLocalInterfaceForDuplication;
@property (nonatomic) C preferredRemoteInterfaceForDuplication;
@property (nonatomic) BOOL isLocalCellularInterfaceUsed;
@property (nonatomic) <VCConnectionManagerDelegate> delegate;
@property (nonatomic) BOOL isAudioOnly;
@property (nonatomic) BOOL supportDuplication;
@property (nonatomic) <VCConnectionProtocol> primaryConnection;
@property (nonatomic) <VCConnectionProtocol> secondaryConnection;
@property (nonatomic) <VCConnectionProtocol> connectionForDuplication;
@property (nonatomic) NSInteger connectionCount;
@property (nonatomic) Q mediaExcessiveCellularTxBytes;
@property (nonatomic) Q mediaExcessiveCellularRxBytes;
@property (nonatomic) Q signalingExcessiveCellularTxBytes;
@property (nonatomic) Q signalingExcessiveCellularRxBytes;
@property (nonatomic) Q budgetConsumingCellularTxBytes;
@property (nonatomic) Q budgetConsumingCellularRxBytes;
@property (nonatomic) Q mediaCellularTxBytes;
@property (nonatomic) Q mediaCellularRxBytes;
@property (nonatomic) Q mediaWifiTxBytes;
@property (nonatomic) Q mediaWifiRxBytes;
@property (nonatomic) double noRemotePacketInterval;
@property (nonatomic) double remoteNoRemotePacketInterval;
@property (nonatomic) VCStatsRecorder statsRecorder;
@property (nonatomic) BOOL preferRelayOverP2PEnabled;
@property (nonatomic) BOOL fastMediaDuplicationEnabled;
@property (nonatomic) BOOL cellPrimaryInterfaceChangeEnabled;
@property (nonatomic) BOOL duplicateImportantPktsEnabled;
@property (nonatomic) BOOL lowNetworkModeEnabled;
@property (nonatomic) BOOL duplicationEnhancementEnabled;
@property (nonatomic) BOOL iRATDuplicationEnabled;
@property (nonatomic) double noRemoteDuplicationThresholdFast;
@property (nonatomic) I realRATType;
@property (nonatomic) C linkProbingCapabilityVersion;
@property (nonatomic) C remoteLinkProbingCapabilityVersion;
@property (nonatomic) double primaryConnHealthAllowedDelay;
@property (nonatomic) AVCStatisticsCollector statisticsCollector;
@property (nonatomic) VCConnectionHealthMonitor connectionHealthMonitor;
@property (nonatomic) BOOL optIntoExistingSubscribedStreams;
@property (nonatomic) BOOL isDuplicationAllowed;
@property (nonatomic) BOOL isOneToOneModeEnabled;
@property (nonatomic) BOOL useMediaDrivenDuplication;
@property (nonatomic) BOOL startConnectionHealthMonitoring;
@property (nonatomic) BOOL isRemoteMediaQualityDegraded;
@property (nonatomic) I sendSuccessCountSinceLastCheck;
@property (nonatomic) I sendFailureCountSinceLastCheck;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)connectionCount;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (int)removeConnection:;
- (void)stop;
- (id)secondaryConnection;
- (id)delegate;
- (int)addConnection:;
- (unsigned int)callID;
- (void)setCallID:;
- (int)relayServerProvider;
- (void)startActiveProbingWithOptions:;
- (void)stopActiveProbingWithOptions:;
- (void)flushLinkProbingStatusWithOptions:;
- (BOOL)isOneToOneModeEnabled;
- (BOOL)isAudioOnly;
- (void)periodicTask:;
- (void)registerPeriodicTask;
- (void)deregisterPeriodicTask;
- (id)statisticsCollector;
- (void)setStatisticsCollector:;
- (id)connectionHealthMonitor;
- (void)setReportingAgent:;
- (void)destroyNWMonitor;
- (unsigned char)remoteLinkProbingCapabilityVersion;
- (void)setRemoteLinkProbingCapabilityVersion:;
- (void)queryProbingResultsWithOptions:;
- (unsigned char)linkProbingCapabilityVersion;
- (BOOL)fastMediaDuplicationEnabled;
- (void)setFastMediaDuplicationEnabled:;
- (BOOL)duplicateImportantPktsEnabled;
- (void)setDuplicateImportantPktsEnabled:;
- (void)setIsAudioOnly:;
- (void)reportConnection:isInitialConnection:;
- (void)updateCellularMTU:;
- (void)updateCellularTech:forLocalInterface:;
- (void)sourceDestinationInfo:isSourceOnCellular:isSourceIPv6:;
- (BOOL)shouldAcceptDataFromSourceDestinationInfo:;
- (id)copyConnectionWithSourceDestinationInfo:isPrimary:;
- (void)updateSessionStats:;
- (void)updatePacketCountAndByteCountWithIndex:packetSize:numOfStreamId:isPriorityIncluded:isOutgoing:;
- (void)synchronizeParticipantGenerationCounter:;
- (unsigned int)getPacketCountWithIndex:isOutgoing:;
- (unsigned int)getByteCountWithIndex:isOutgoing:;
- (void)updateConnectionForDuplication;
- (void)reportLinkProbingStatsWithDuplicationJustStarted:;
- (void)updateOneToOneBitrateCapsForConnection:;
- (void)updateAllBitrateCapsForConnection:;
- (void)updateNegotiatedSettingsOnetoOne:;
- (void)useConnectionAsPrimary:;
- (id)getConnectionSelectionPolicy;
- (id)primaryConnection;
- (void)setPrimaryConnection:;
- (void)setSecondaryConnection:;
- (id)connectionForDuplication;
- (void)setConnectionForDuplication:;
- (id)lastPrimaryConnectionInUse;
- (void)setLastPrimaryConnectionInUse:;
- (int)processRemoteWRMSuggestion:isRemoteDuplicating:;
- (void)connectionHealthDidUpdate:isLocalConnection:;
- (void)didChangeWifiAssistAvailable:reason:;
- (void)didUpdateMotionActivity:;
- (void)registerStatisticsHandlers;
- (void)unregisterStatisticsHandlers;
- (void)setupConnectionHealthMonitorMultiway;
- (void)setupConnectionHealthMonitor;
- (void)setPreferRelayOverP2PEnabled:;
- (void)setIsOneToOneModeEnabled:;
- (void)setStartConnectionHealthMonitoring:;
- (unsigned int)sendSuccessCountSinceLastCheck;
- (unsigned int)sendFailureCountSinceLastCheck;
- (void)resetConnectionStatTimers;
- (BOOL)useMediaDrivenDuplication;
- (void)setUseMediaDrivenDuplication:;
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:remoteFrameworkVersion:;
- (void)checkAndUpdatePrimaryConnection;
- (BOOL)isBetterPrimaryConnectionAvailable;
- (void)setDuplicationCallback:withContext:;
- (void)setConnectionPause:isLocalConnection:;
- (void)setiRATDuplicationEnabled:;
- (BOOL)isDuplicationEnabled;
- (void)setDuplicationEnabled:;
- (void)addTelemetryForConnection:dictionary:;
- (void)addDuplicationSelectionLogicTelemetryForConnection:suggestedLinkTypeCombo:payload:;
- (void)addLinkProbingTelemetry:;
- (void)setDuplicationEnabledInternal:;
- (id)reasonStringWithDuplicationReason:;
- (int)setWRMUpdateCallback:requestNotificationCallback:withContext:completionHandler:;
- (void)setPreWarmState:;
- (void)setRemotePreWarmStateEnabled:;
- (void)setIsRemoteMediaQualityDegraded:;
- (void)alertStateUpdated:isLocal:;
- (void)resetMediaByteCounters;
- (id)processDuplicationStateUpdateEvent:didLocalHandover:timeDurationMs:linkType:wrmCallbackScenario:;
- (BOOL)isDuplicationAllowed;
- (void)setDuplicationDownlinkCellBitrateCap:currentBitrate:;
- (void)checkForCachedWRMNotification;
- (int)setWRMNotification:;
- (int)processWRMNotification:;
- (void)processWRMCoexMetrics:;
- (void)reportWRMSuggestion:;
- (void)requestWRMNotification;
- (int)getNumberOfConnectionsInternal;
- (BOOL)isInterfaceOnCellularForActiveConnectionWithQuality:forLocalInterface:;
- (void)getSentBytes:receivedBytes:;
- (int)getConnectionTypeForActiveConnectionWithQuality:forLocalInterface:;
- (int)getCellularTechForActiveConnectionWithQuality:forLocalInterface:;
- (int)getCellularMTUForActiveConnectionWithQuality:;
- (BOOL)isConnectedOnIPv6ForActiveConnectionWithQuality:;
- (BOOL)isConnectedOnRelayForActiveConnectionWithQuality:;
- (void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:bytesSent:isMediaData:shouldCountPacket:numOfStreamId:isPriorityIncluded:;
- (void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:bytesReceived:isMediaData:shouldCountPacket:numOfStreamId:isPriorityIncluded:;
- (void)reportActiveConnectionOneToOne:isAudioOnly:;
- (void)reportFirstActiveConnectionOneToOne:remoteOSVersion:redState:isAudioOnly:;
- (void)addMediaHealthStatsHistoryEntryForParticipantID:;
- (void)removeMediaHealthStatsHistoryEntryForParticipantID:;
- (void)duplicationStateUpdateWithEvent:;
- (void)aggregateStallTimeDuration:idsParticipantID:;
- (void)checkMediaQualityDegradedForParticipantID:;
- (void)updateMediaHealthStats:idsParticipantID:;
- (void)updateMediaDegradedHistoryWithValue:idsParticipantID:;
- (BOOL)isDuplicationAllowedForParticipantID:bucketsToSum:threshold:;
- (void)updateMediaDegradedHistoryWithCurrentVideoStallDuration:idsParticipantID:;
- (void)updateMediaDegradedHistoryWithCurrentAudioErasure:idsParticipantID:;
- (void)updateWithRemoteMediaHealthDuplication:;
- (void)resetMediaHealthStats;
- (id)activeConnectionRegistry;
- (id)suggestedLinkTypeCombo;
- (void)configureNWConnectionMonitor:;
- (void)checkpointPrimaryConnection:;
- (void)primaryConnectionChanged:oldPrimaryConnection:;
- (void)renewNWMonitor;
- (void)setVCNWConnectionMonitorStatisticsHandler;
- (void)destroyNWMonitorInternal;
- (void)disableRemotePreferredInterfaceInference:;
- (int)getConnectionSelectionVersionFromFrameworkVersion:;
- (void)promoteSecondaryConnectionToPrimary:;
- (BOOL)isBetterConnection:asPrimary:;
- (BOOL)isOptimalConnection:asPrimary:interfaceMask:;
- (id)connectionForQualityInternal:;
- (id)copyConnectionForQuality:;
- (void)updateWRMDuplicationForHandover;
- (id)createSourceDestinationInfoListWithConfig:;
- (BOOL)shouldUseServerBasedConnection:isEndToEnd:;
- (void)checkWRMSuggestionDefaultValue;
- (void)checklocalRATTypeOverrideDefaultValue:;
- (void)checkActivelyRequestWRMRecommendation:isLocalUsingCellular:;
- (BOOL)isLocalCellularInterfaceUsed;
- (void)reportConnectionUpdateWithRespCode:;
- (void)reportConnectionUpdateWithResponseCode:delay:;
- (void)setDefaultLinkProbingCapabilityVersionForDeviceRole:;
- (double)primaryConnHealthAllowedDelay;
- (void)updateReceivedExcessiveBytes:isMediaData:isIPv6:;
- (void)updateTransmittedExcessiveBytes:isMediaData:isIPv6:;
- (void)updateTransmittedBytes:isOnCell:isIPv6:;
- (void)updateReceivedBytes:isOnCell:isIPv6:;
- (void)updateCellularExcessiveBytesWithSourceDestinationInfo:bytes:isMediaData:isOutgoing:;
- (int)setConnectionHealthOnControlInfo:;
- (int)processConnectionHealthFromControlInfo:;
- (void)useCellPrimayInterface:;
- (void)updateDuplicationStateWithEventType:;
- (void)reportNoPacketUpdateUsingCurrentTime:lastReceivedPacketTime:;
- (void)updateConnectionStatsWithIndicatorNoPacket:;
- (void)updateConnectionStatsWithIndicatorOnlyPrimaryNoPacket:;
- (void)updateConnectionStatsWithIndicatorNone:;
- (void)updateConnectionStatsWithIndicatorPrimaryImproved:;
- (void)updateConnectionHealthWithVCStatisticsMessage:;
- (BOOL)shouldDropCurrentPrimaryConnectionWithConnectionStats:;
- (BOOL)shouldDuplicatePacket:;
- (void)setActiveLinkProbingEnabled:;
- (void)updateProbingResults:;
- (BOOL)areAllLinkProbingTriggersInactive;
- (BOOL)isDuplicationConnectionCandidate:;
- (void)updateLinkPreferSuggestion:;
- (void)applyLinkRecommendation;
- (void)reportLinkSuggestion;
- (void)applyLinkFlags:isCellular:;
- (void)applyRemoteLinkFlags:isCellular:;
- (void)reselectPrimaryConnection;
- (void)updateConnectionSelectionPolicyWithPreferE2E:;
- (void)setRelayServerProvider:;
- (unsigned char)preferredLocalInterfaceForDuplication;
- (void)setPreferredLocalInterfaceForDuplication:;
- (unsigned char)preferredRemoteInterfaceForDuplication;
- (void)setPreferredRemoteInterfaceForDuplication:;
- (BOOL)supportDuplication;
- (void)setSupportDuplication:;
- (void)setIsDuplicationAllowed:;
- (unsigned long long)mediaExcessiveCellularTxBytes;
- (unsigned long long)mediaExcessiveCellularRxBytes;
- (unsigned long long)signalingExcessiveCellularTxBytes;
- (unsigned long long)signalingExcessiveCellularRxBytes;
- (unsigned long long)mediaCellularTxBytes;
- (unsigned long long)mediaCellularRxBytes;
- (unsigned long long)mediaWifiTxBytes;
- (unsigned long long)mediaWifiRxBytes;
- (double)noRemotePacketInterval;
- (double)remoteNoRemotePacketInterval;
- (id)statsRecorder;
- (BOOL)isPreWarmStateEnabled;
- (BOOL)remotePreWarmStateEnabled;
- (BOOL)preferRelayOverP2PEnabled;
- (BOOL)cellPrimaryInterfaceChangeEnabled;
- (void)setCellPrimaryInterfaceChangeEnabled:;
- (double)noRemoteDuplicationThresholdFast;
- (void)setNoRemoteDuplicationThresholdFast:;
- (BOOL)lowNetworkModeEnabled;
- (void)setLowNetworkModeEnabled:;
- (BOOL)duplicationEnhancementEnabled;
- (void)setDuplicationEnhancementEnabled:;
- (BOOL)iRATDuplicationEnabled;
- (unsigned int)realRATType;
- (void)setRealRATType:;
- (BOOL)startConnectionHealthMonitoring;
- (BOOL)isRemoteMediaQualityDegraded;
- (unsigned long long)budgetConsumingCellularTxBytes;
- (unsigned long long)budgetConsumingCellularRxBytes;
- (BOOL)optIntoExistingSubscribedStreams;
- (void)setOptIntoExistingSubscribedStreams:;
@end
