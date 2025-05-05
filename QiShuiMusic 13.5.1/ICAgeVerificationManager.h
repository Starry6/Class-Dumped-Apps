@interface ICAgeVerificationManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> calloutQueue;
@property (nonatomic) NSMutableDictionary ageVerificationStateInternal;
@property (nonatomic) ICAgeVerificationState ageVerificationState;
- (void)setAccessQueue:;
- (void)_registerForNotifications;
- (void)setCalloutQueue:;
- (void)_runAgeVerificationForUserIdentity:completion:;
- (id)accessQueue;
- (void)_updateAgeVerificationStateForUserIdentity:sendNotification:completion:;
- (void)getAgeVerificationStateForUserIdentity:completion:;
- (id)ageVerificationStateForUserIdentity:;
- (BOOL)_bagHasValidKeys:;
- (id)calloutQueue;
- (void).cxx_destruct;
- (void)getAgeVerificationStateWithCompletion:;
- (id)_init;
- (void)_updateAgeVerificationStateAndSendNotification:completion:;
- (id)ageVerificationStateInternal;
- (id)ageVerificationState;
- (void)setAgeVerificationStateInternal:;
- (void)_userIdentityStoreDidChange:;
- (BOOL)_processAgeVerificationState:forDSID:;
+ (id)defaultManager;
@end
