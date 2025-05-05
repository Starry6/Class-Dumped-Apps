@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent
@property (nonatomic) NSString acknowledgmentIdentifier;
@property (nonatomic) NSNumber acknowledgmentVersion;
@property (nonatomic) BOOL acknowledged;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) BOOL displayed;
- (id)init;
- (id)bundleIdentifier;
- (void)setAcknowledged:;
- (void)setBundleIdentifier:;
- (BOOL)acknowledged;
- (BOOL)displayed;
- (void)setDisplayed:;
- (id)acknowledgmentIdentifier;
- (id)acknowledgmentVersion;
- (void)setAcknowledgmentIdentifier:;
- (void)setAcknowledgmentVersion:;
@end
