@interface MCHacks : NSObject
- (BOOL)isGreenTea;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:;
- (void)_applyServerSideChangesWithOldRestrictions:newRestrictions:oldEffectiveUserSettings:newEffectiveUserSettings:;
- (id)_permittedGracePeriodNumbers;
- (id)permittedAutoLockNumbers;
- (id)_selectLargestNumberFromSortedArray:equalToOrLessThanNumber:;
- (id)quantizedGracePeriodInSeconds:;
- (id)quantizedAutoLockInSeconds:;
- (BOOL)_applyHeuristicsToRestrictions:forProfile:outError:;
- (void)_applyImpliedSettingsToSettingsDictionary:currentSettings:restrictions:;
- (void)_applyHeuristicsToEffectiveUserSettings:;
- (void)_applyMandatorySettingsToEffectiveUserSettings:;
- (void)_applyHeuristicsToGranfatheredRestrictionPayloadKeys:;
- (void)_applyInternalDiagnosticEnforcementToSettings:;
- (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:;
- (id)_deviceSpecificDefaultSettings;
- (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:;
- (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:;
- (BOOL)isJapanSKU;
- (BOOL)isSetupBuddyDone;
+ (id)sharedHacks;
@end
