@interface C2MPMetric : PBCodable
@property (nonatomic) BOOL hasMetricType;
@property (nonatomic) NSInteger metricType;
@property (nonatomic) BOOL hasDeviceInfo;
@property (nonatomic) C2MPDeviceInfo deviceInfo;
@property (nonatomic) BOOL hasCloudkitInfo;
@property (nonatomic) C2MPCloudKitInfo cloudkitInfo;
@property (nonatomic) BOOL hasServerInfo;
@property (nonatomic) C2MPServerInfo serverInfo;
@property (nonatomic) BOOL hasTriggers;
@property (nonatomic) Q triggers;
@property (nonatomic) BOOL hasReportFrequency;
@property (nonatomic) Q reportFrequency;
@property (nonatomic) BOOL hasReportFrequencyBase;
@property (nonatomic) Q reportFrequencyBase;
@property (nonatomic) BOOL hasReportTransportAllowExpensiveAccess;
@property (nonatomic) BOOL reportTransportAllowExpensiveAccess;
@property (nonatomic) BOOL hasReportTransportAllowPowerNapScheduling;
@property (nonatomic) BOOL reportTransportAllowPowerNapScheduling;
@property (nonatomic) BOOL hasReportTransportSourceApplicationBundleIdentifier;
@property (nonatomic) NSString reportTransportSourceApplicationBundleIdentifier;
@property (nonatomic) BOOL hasReportTransportSourceApplicationSecondaryIdentifier;
@property (nonatomic) NSString reportTransportSourceApplicationSecondaryIdentifier;
@property (nonatomic) BOOL hasNetworkEvent;
@property (nonatomic) C2MPNetworkEvent networkEvent;
@property (nonatomic) BOOL hasGenericEvent;
@property (nonatomic) C2MPGenericEvent genericEvent;
- (void)setHasTriggers:;
- (BOOL)hasReportFrequencyBase;
- (unsigned long long)reportFrequencyBase;
- (void)setReportFrequency:;
- (void)setReportFrequencyBase:;
- (BOOL)hasTriggers;
- (void)setTriggers:;
- (unsigned long long)reportFrequency;
- (unsigned long long)triggers;
- (void)setHasReportFrequencyBase:;
- (void)setNetworkEvent:;
- (void)setDeviceInfo:;
- (BOOL)hasDeviceInfo;
- (id)deviceInfo;
- (id)networkEvent;
- (BOOL)reportTransportAllowExpensiveAccess;
- (void)setGenericEvent:;
- (void)writeTo:;
- (void)setMetricType:;
- (BOOL)reportTransportAllowPowerNapScheduling;
- (void)setHasReportTransportAllowExpensiveAccess:;
- (BOOL)hasReportTransportSourceApplicationSecondaryIdentifier;
- (unsigned long long)hash;
- (int)StringAsMetricType:;
- (id)genericEvent;
- (void)copyTo:;
- (BOOL)hasMetricType;
- (void)mergeFrom:;
- (int)metricType;
- (id)reportTransportSourceApplicationSecondaryIdentifier;
- (void)setReportTransportAllowPowerNapScheduling:;
- (BOOL)hasReportFrequency;
- (void)setCloudkitInfo:;
- (BOOL)hasGenericEvent;
- (void)setReportTransportSourceApplicationSecondaryIdentifier:;
- (id)reportTransportSourceApplicationBundleIdentifier;
- (BOOL)hasReportTransportAllowPowerNapScheduling;
- (void).cxx_destruct;
- (void)setHasReportTransportAllowPowerNapScheduling:;
- (BOOL)hasNetworkEvent;
- (void)setReportTransportSourceApplicationBundleIdentifier:;
- (BOOL)readFrom:;
- (id)metricTypeAsString:;
- (id)cloudkitInfo;
- (id)description;
- (BOOL)hasCloudkitInfo;
- (BOOL)hasReportTransportSourceApplicationBundleIdentifier;
- (id)dictionaryRepresentation;
- (void)setServerInfo:;
- (BOOL)hasServerInfo;
- (void)setHasReportFrequency:;
- (BOOL)hasReportTransportAllowExpensiveAccess;
- (void)setReportTransportAllowExpensiveAccess:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)serverInfo;
- (void)setHasMetricType:;
@end
