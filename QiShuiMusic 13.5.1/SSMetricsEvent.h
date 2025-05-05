@interface SSMetricsEvent : NSObject
@property (nonatomic) NSString eventType;
@property (nonatomic) BOOL shouldSuppressUserInfo;
@property (nonatomic) BOOL shouldSuppressDSIDHeader;
- (BOOL)shouldSuppressUserInfo;
- (id)eventType;
- (BOOL)isFieldBlacklistEnabled;
- (void).cxx_destruct;
- (BOOL)requiresDiagnosticSendingPermission;
- (void)appendPropertiesToBody:;
- (id)allTableEntityPropertiesPermittedByConfiguration:;
- (id)allTableEntityPropertiesPermittedByConfiguration:externalValues:;
- (BOOL)isBlacklistedByConfiguration:;
- (id)_dictionaryRepresentationOfBody;
- (id)millisecondsFromTimeInterval:;
- (double)timeIntervalFromMilliseconds:;
- (id)decorateReportingURL:;
- (BOOL)shouldSuppressDSIDHeader;
+ (id)_globalCanaryLock;
+ (id)globalEventCanary;
+ (void)setGlobalEventCanary:;
@end
