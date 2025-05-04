@interface AWEElderModeModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)triggerElderModeAlert;
- (BOOL)shouldHideMusicElement;
- (BOOL)shouldHideShareCount;
- (id)elderModeSharedManager;
- (BOOL)isElderModeAlertShowing;
@end
