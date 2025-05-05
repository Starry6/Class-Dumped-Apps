@interface DNDMutableModeConfiguration : DNDModeConfiguration
@property (nonatomic) DNDMode mode;
@property (nonatomic) DNDConfiguration configuration;
@property (nonatomic) NSArray triggers;
@property (nonatomic) Q impactsAvailability;
@property (nonatomic) Q dimsLockScreen;
@property (nonatomic) NSDate created;
@property (nonatomic) NSDate lastModified;
@property (nonatomic) q compatibilityVersion;
@property (nonatomic) BOOL automaticallyGenerated;
- (void)setTriggers:;
- (void)setCreated:;
- (void)setLastModified:;
- (void)setCompatibilityVersion:;
- (void)setImpactsAvailability:;
- (void)setDimsLockScreen:;
- (void)setConfiguration:;
- (void)setAutomaticallyGenerated:;
- (void)setMode:;
- (id)copyWithZone:;
@end
