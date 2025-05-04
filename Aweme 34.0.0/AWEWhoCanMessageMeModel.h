@interface AWEWhoCanMessageMeModel : AWEBaseApiModel
@property (nonatomic) BOOL friendSwitch;
@property (nonatomic) BOOL followSwitch;
@property (nonatomic) BOOL maybeKnowSwitch;
@property (nonatomic) BOOL strangerSwitch;
@property (nonatomic) BOOL mateSwitch;
- (long long)settingStatus;
- (BOOL)friendSwitch;
- (BOOL)followSwitch;
- (BOOL)maybeKnowSwitch;
- (BOOL)strangerSwitch;
- (void)setFriendSwitch:;
- (BOOL)allSwitchesOff;
- (BOOL)mateSwitch;
- (BOOL)onlyFriendSwitchOn;
- (BOOL)allPeopleCanMessage;
- (void)setFollowSwitch:;
- (void)setMaybeKnowSwitch:;
- (void)setStrangerSwitch:;
- (void)setMateSwitch:;
+ (id)JSONKeyPathsByPropertyKey;
@end
