@interface FBSceneMonitorBehaviors : NSObject
@property (nonatomic) BOOL monitorsClientSettings;
@property (nonatomic) BOOL monitorsSettings;
@property (nonatomic) BOOL monitorsPairingStatus;
- (void)setMonitorsClientSettings:;
- (BOOL)monitorsSettings;
- (BOOL)monitorsClientSettings;
- (void)setMonitorsPairingStatus:;
- (BOOL)monitorsPairingStatus;
- (void)setMonitorsSettings:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
