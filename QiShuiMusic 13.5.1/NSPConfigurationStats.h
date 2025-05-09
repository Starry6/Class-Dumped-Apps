@interface NSPConfigurationStats : NSPProxyAnalytics
@property (nonatomic) Q configurationVersion;
@property (nonatomic) BOOL configurationEnabled;
@property (nonatomic) BOOL tokenFetchEnabled;
@property (nonatomic) NSString tierType;
@property (nonatomic) BOOL safariUnencryptedEnabled;
@property (nonatomic) BOOL safariDNSEnabled;
@property (nonatomic) BOOL safariTrackersEnabled;
@property (nonatomic) BOOL safariAllEnabled;
@property (nonatomic) BOOL safariHTTPEnabled;
@property (nonatomic) BOOL mailTrackersEnabled;
@property (nonatomic) BOOL unencryptedEnabled;
@property (nonatomic) BOOL dnsEnabled;
@property (nonatomic) BOOL knownTrackersEnabled;
@property (nonatomic) BOOL appTrackersEnabled;
@property (nonatomic) BOOL newsURLResolutionEnabled;
@property (nonatomic) BOOL exposureNotificationsEnabled;
@property (nonatomic) BOOL appleCertificatesEnabled;
@property (nonatomic) BOOL networkToolsEnabled;
@property (nonatomic) BOOL metricsUploadEnabled;
@property (nonatomic) BOOL brandedCallingEnabled;
@property (nonatomic) BOOL newsEmbeddedContentEnabled;
- (void)setTierType:;
- (id)eventName;
- (unsigned long long)configurationVersion;
- (void).cxx_destruct;
- (void)setConfigurationVersion:;
- (id)analyticsDict;
- (id)tierType;
- (BOOL)configurationEnabled;
- (void)setConfigurationEnabled:;
- (BOOL)tokenFetchEnabled;
- (void)setTokenFetchEnabled:;
- (BOOL)safariUnencryptedEnabled;
- (void)setSafariUnencryptedEnabled:;
- (BOOL)safariDNSEnabled;
- (void)setSafariDNSEnabled:;
- (BOOL)safariTrackersEnabled;
- (void)setSafariTrackersEnabled:;
- (BOOL)safariAllEnabled;
- (void)setSafariAllEnabled:;
- (BOOL)safariHTTPEnabled;
- (void)setSafariHTTPEnabled:;
- (BOOL)mailTrackersEnabled;
- (void)setMailTrackersEnabled:;
- (BOOL)unencryptedEnabled;
- (void)setUnencryptedEnabled:;
- (BOOL)dnsEnabled;
- (void)setDnsEnabled:;
- (BOOL)knownTrackersEnabled;
- (void)setKnownTrackersEnabled:;
- (BOOL)appTrackersEnabled;
- (void)setAppTrackersEnabled:;
- (BOOL)newsURLResolutionEnabled;
- (void)setNewsURLResolutionEnabled:;
- (BOOL)exposureNotificationsEnabled;
- (void)setExposureNotificationsEnabled:;
- (BOOL)appleCertificatesEnabled;
- (void)setAppleCertificatesEnabled:;
- (BOOL)networkToolsEnabled;
- (void)setNetworkToolsEnabled:;
- (BOOL)metricsUploadEnabled;
- (void)setMetricsUploadEnabled:;
- (BOOL)brandedCallingEnabled;
- (void)setBrandedCallingEnabled:;
- (BOOL)newsEmbeddedContentEnabled;
- (void)setNewsEmbeddedContentEnabled:;
@end
