@interface IMSyncErrorAnalyzer : NSObject
- (BOOL)_isCKErrorPartialFailure:;
- (id)_errorsFromPartialError:;
- (BOOL)CKPartialError:onlyHasErrorCodes:;
- (BOOL)CKPartialError:hasErrorCode:;
- (BOOL)errorIndicatesZoneNotCreated:;
- (BOOL)errorIndicatesUserDeletedZone:;
- (BOOL)errorIndicatesDeviceConditionsDontAllowSync:;
- (BOOL)errorIndicatesMaxAttemptsFailed:;
- (BOOL)errorIndicatesQuotaExceeded:;
- (BOOL)acceptableErrorCodeWhileDeleting:;
- (id)extractRecordIDsDeletedFromCKPartialError:;
- (id)extractRecordIDsNotFoundFromCKPartialError:;
- (BOOL)errorIndicatesIdentityWasLost:;
- (BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:;
- (unsigned long long)calculateDelay:forAttempt:maxInterval:;
- (long long)responseForError:attempt:retryInterval:;
+ (id)sharedInstance;
@end
