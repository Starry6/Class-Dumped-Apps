@interface BDAntiAddictionNetworkManager : NSObject
- (void)changePasswordWithParams:completion:;
- (void)complianceSettingsWithCompletion:;
- (void)getAuthTicketWithParams:completion:;
- (void)passwordCheckWithParams:completion:;
- (void)resetTeenModeWithParams:completion:;
- (void)timeRecordWithParams:completion:;
- (void)updateTeenModeWithParams:completion:;
- (id)domain;
+ (id)sharedInstance;
@end
