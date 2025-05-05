@interface AKFollowUpSynchronizer : NSObject
@property (nonatomic) <AKFollowUpProvider> followupProvider;
@property (nonatomic) AKAppleIDAuthenticationController controller;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setController:;
- (void).cxx_destruct;
- (id)controller;
- (id)_authController;
- (BOOL)authenticationController:shouldContinueWithAuthenticationResults:error:forContext:;
- (BOOL)synchronizeFollowUpsForAccount:inStore:error:;
- (BOOL)shouldSynchronizeForAccount:;
- (id)followupProvider;
- (void)setFollowupProvider:;
+ (void)updateSynchronizeTimeForAccount:inStore:;
+ (void)updateSynchronizeTimeNoSaveForAccount:;
@end
