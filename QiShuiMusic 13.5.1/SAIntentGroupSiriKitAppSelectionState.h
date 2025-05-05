@interface SAIntentGroupSiriKitAppSelectionState : AceObject
@property (nonatomic) NSString appConfirmationState;
@property (nonatomic) NSString appCorrectionState;
@property (nonatomic) NSArray eligibleApps;
@property (nonatomic) SASyncAppIdentifyingInfo requestedApp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)appConfirmationState;
- (void)setAppConfirmationState:;
- (id)appCorrectionState;
- (void)setAppCorrectionState:;
- (id)eligibleApps;
- (void)setEligibleApps:;
- (id)requestedApp;
- (void)setRequestedApp:;
+ (id)siriKitAppSelectionState;
+ (id)siriKitAppSelectionStateWithDictionary:context:;
@end
