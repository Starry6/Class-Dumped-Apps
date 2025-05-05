@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController
@property (nonatomic) BOOL cancelsWhenAppEntersBackground;
- (void)_sceneDidEnterBackground:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)setCancelsWhenAppEntersBackground:;
- (BOOL)cancelsWhenAppEntersBackground;
+ (id)alertControllerWithMatchesFromFormProtectionSpace:matchesFromOtherProtectionSpaces:externalCredentials:preferredStyle:formURL:completionHandler:;
@end
