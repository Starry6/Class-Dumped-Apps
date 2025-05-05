@interface BKDevicePearl : BKDevice
@property (nonatomic) <BKDevicePearlDelegate> delegate;
@property (nonatomic) q pearlState;
- (id)queryIdentityMigrationFailureForUser:error:;
- (id)supportsPeriocularEnrollmentWithError:;
- (void)removePeriocularEnrollmentsForUser:removeAll:reply:;
- (BOOL)removePeriocularEnrollmentsForUser:removeAll:error:;
- (id)periocularMatchStateForUser:error:;
- (long long)deviceEventWithStatus:;
- (long long)deviceStateWithStatus:;
- (BOOL)removePeriocularEnrollmentsFromIdentity:removeAll:error:;
- (id)createMatchOperationWithError:;
- (id)createPresenceDetectOperationWithError:;
- (void)removePeriocularEnrollmentsForUser:identityUUID:removeAll:async:reply:;
- (BOOL)clearIdentityMigrationFailureForUser:error:;
- (id)periocularMatchStateWithError:;
- (void)statusMessage:client:;
- (BOOL)setTemplate:forIdentity:error:;
- (id)createEnrollOperationWithError:;
- (void)removePeriocularEnrollmentsFromIdentity:removeAll:reply:;
- (long long)pearlState;
+ (BOOL)deviceAvailableWithFailure:;
@end
