@interface AWEAwemeBackgroundPlayStoreService : HTSService
@property (nonatomic) BOOL switchState;
@property (nonatomic) BOOL bgPlayComponentSwitchState;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (id)enterMethod;
- (BOOL)bgPlayComponentSwitchState;
- (void)setBgPlayComponentSwitchState:;
- (BOOL)isSwitchON;
- (void)setSwitch:;
- (BOOL)isBGPlayComponentSwitchOn;
- (void)setBGPlayComponentSwitch:;
- (id)titleForBGPlayComponentSwitch;
- (id)subTitleForBGPlayComponentSwitch;
- (Class)backgroundPlaySettingsPanel;
- (void)setBackgroundEnterMethod:;
- (id)backgroundEnterMethod;
- (id)init;
- (void).cxx_destruct;
- (void)setSwitchState:;
- (BOOL)switchState;
@end
