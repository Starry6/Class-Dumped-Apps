@interface AWEPendantCapsuleView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) Q state;
@property (nonatomic) NSString timeString;
@property (nonatomic) NSString fistStageString;
@property (nonatomic) NSString finishedStageString;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString bdColor;
@property (nonatomic) NSString txtColor;
@property (nonatomic) BOOL needAdaptePad;
- (void)showOnView:;
- (id)txtColor;
- (void)setTxtColor:;
- (void)setBdColor:;
- (void)showOnNormalView:;
- (void)setNeedAdaptePad:;
- (void)setFistStageString:;
- (void)setFinishedStageString:;
- (id)bdColor;
- (BOOL)needAdaptePad;
- (void)playSwitchAnimationFromState:toState:;
- (id)finishedStageString;
- (id)fistStageString;
- (void)switchFromState:toState:;
- (id)textLabel;
- (id)init;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)setState:;
- (void)setTextLabel:;
- (void)setTimeString:;
- (id)timeString;
- (id)bgColor;
- (void)setBgColor:;
@end
