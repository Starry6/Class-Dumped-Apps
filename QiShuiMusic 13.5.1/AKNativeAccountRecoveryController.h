@interface AKNativeAccountRecoveryController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cdpContext:verifyMasterKey:completion:;
- (void).cxx_destruct;
- (void)dismissNativeRecoveryUIWithCompletion:;
- (void)cdpContext:performSilentRecoveryTokenRenewal:;
- (id)initWithContext:uiProvider:;
- (void)presentNativeRecoveryUIWithCompletion:;
- (id)_mapICSCRecoveryResultsToAuthKit:;
+ (id)requestForRecoveryCompletionWithContext:recoveredInfo:recoveryError:;
+ (id)postBodyForiCSCServerUIResponseWithContext:recoveryError:;
+ (BOOL)shouldSendServerResponseForRecoveredInfo:withRecoveryError:;
@end
