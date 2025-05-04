@interface AWEIMIncentive7DaysChallengeComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)handleUserActionWithParams:;
- (void)sevenDaysChallengeTaskCompleteWithCid:;
- (void)p_handleUserActionWithActionType:;
- (void)p_openTakePicture;
- (void)p_shareVideo;
- (void)p_sendAudioMessage;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
