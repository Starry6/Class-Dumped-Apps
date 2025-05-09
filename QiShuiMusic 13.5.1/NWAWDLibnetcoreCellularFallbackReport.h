@interface NWAWDLibnetcoreCellularFallbackReport : PBCodable
@property (nonatomic) BOOL hasFellback;
@property (nonatomic) BOOL fellback;
@property (nonatomic) BOOL hasDenyReason;
@property (nonatomic) NSInteger denyReason;
@property (nonatomic) BOOL hasFallbackTimerMsecs;
@property (nonatomic) Q fallbackTimerMsecs;
@property (nonatomic) Q networkEventsCount;
@property (nonatomic) ^i networkEvents;
@property (nonatomic) Q timeToNetworkEventsMsecsCount;
@property (nonatomic) ^Q timeToNetworkEventsMsecs;
@property (nonatomic) NSMutableArray primaryInterfaceAttemptStatisticsReports;
@property (nonatomic) NSMutableArray dataUsageSnapshotsAtNetworkEvents;
@property (nonatomic) BOOL hasCellularRadioTechnology;
@property (nonatomic) NSInteger cellularRadioTechnology;
@property (nonatomic) BOOL hasWifiRadioTechnology;
@property (nonatomic) NSInteger wifiRadioTechnology;
@property (nonatomic) BOOL hasCellularBand;
@property (nonatomic) NSInteger cellularBand;
- (id)networkEvents;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setFellback:;
- (void)setHasFellback:;
- (BOOL)hasFellback;
- (int)denyReason;
- (void)setDenyReason:;
- (void)setHasDenyReason:;
- (BOOL)hasDenyReason;
- (id)denyReasonAsString:;
- (int)StringAsDenyReason:;
- (void)setFallbackTimerMsecs:;
- (void)setHasFallbackTimerMsecs:;
- (BOOL)hasFallbackTimerMsecs;
- (unsigned long long)networkEventsCount;
- (void)clearNetworkEvents;
- (void)addNetworkEvents:;
- (int)networkEventsAtIndex:;
- (void)setNetworkEvents:count:;
- (id)networkEventsAsString:;
- (int)StringAsNetworkEvents:;
- (unsigned long long)timeToNetworkEventsMsecsCount;
- (id)timeToNetworkEventsMsecs;
- (void)clearTimeToNetworkEventsMsecs;
- (void)addTimeToNetworkEventsMsecs:;
- (unsigned long long)timeToNetworkEventsMsecsAtIndex:;
- (void)setTimeToNetworkEventsMsecs:count:;
- (void)clearPrimaryInterfaceAttemptStatisticsReports;
- (void)addPrimaryInterfaceAttemptStatisticsReports:;
- (unsigned long long)primaryInterfaceAttemptStatisticsReportsCount;
- (id)primaryInterfaceAttemptStatisticsReportsAtIndex:;
- (void)clearDataUsageSnapshotsAtNetworkEvents;
- (void)addDataUsageSnapshotsAtNetworkEvents:;
- (unsigned long long)dataUsageSnapshotsAtNetworkEventsCount;
- (id)dataUsageSnapshotsAtNetworkEventsAtIndex:;
- (int)cellularRadioTechnology;
- (void)setCellularRadioTechnology:;
- (void)setHasCellularRadioTechnology:;
- (BOOL)hasCellularRadioTechnology;
- (id)cellularRadioTechnologyAsString:;
- (int)StringAsCellularRadioTechnology:;
- (int)wifiRadioTechnology;
- (void)setWifiRadioTechnology:;
- (void)setHasWifiRadioTechnology:;
- (BOOL)hasWifiRadioTechnology;
- (id)wifiRadioTechnologyAsString:;
- (int)StringAsWifiRadioTechnology:;
- (int)cellularBand;
- (void)setCellularBand:;
- (void)setHasCellularBand:;
- (BOOL)hasCellularBand;
- (id)cellularBandAsString:;
- (int)StringAsCellularBand:;
- (BOOL)fellback;
- (unsigned long long)fallbackTimerMsecs;
- (id)primaryInterfaceAttemptStatisticsReports;
- (void)setPrimaryInterfaceAttemptStatisticsReports:;
- (id)dataUsageSnapshotsAtNetworkEvents;
- (void)setDataUsageSnapshotsAtNetworkEvents:;
+ (Class)primaryInterfaceAttemptStatisticsReportsType;
+ (Class)dataUsageSnapshotsAtNetworkEventsType;
@end
