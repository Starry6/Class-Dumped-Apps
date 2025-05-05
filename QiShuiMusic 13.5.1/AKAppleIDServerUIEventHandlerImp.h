@interface AKAppleIDServerUIEventHandlerImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchUserInformationForAltDSID:completion:;
- (void)reauthenticateWithContext:withCompletion:;
- (void)updateAccountUsernameForAltDSID:withHarvestedData:;
- (void)startCDPRepairWithContext:withAdditionalData:completion:;
- (void)updateStateWithExternalAuthenticationResponse:forContext:withAuthController:completion:;
- (void)postCDPFollowUpForError:;
@end
