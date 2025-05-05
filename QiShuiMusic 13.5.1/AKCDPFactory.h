@interface AKCDPFactory : NSObject
+ (id)context;
+ (id)stateControllerWithContext:;
+ (id)cdpUIControllerWithPresentingViewController:;
+ (id)accountRecoveryControllerWithPresentingViewController:;
+ (id)recoveryControllerWithContext:;
+ (id)followUpController;
+ (id)cdpIDMSRecordPRKKey;
+ (id)contextWithAuthResults:;
+ (id)cdpStateUIController;
+ (id)followUpRepairContext;
+ (id)cdpIDMSRecordMIDKey;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:;
+ (id)cdpErrorDomain;
@end
