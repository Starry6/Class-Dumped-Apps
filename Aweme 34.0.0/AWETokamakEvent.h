@interface AWETokamakEvent : NSObject
- (void)onPowerStateDidChange:;
- (void)onSignificantTimeChange:;
- (void)onThermalStateDidChange:;
- (void)start;
+ (void)reportEvent:param:;
+ (void)_reportLogByType:name:param:;
+ (void)reportException:param:;
+ (id)shared;
@end
