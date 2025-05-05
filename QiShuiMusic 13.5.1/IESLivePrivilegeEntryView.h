@interface IESLivePrivilegeEntryView : IESLiveUserEnterBaseView
@property (nonatomic) @? playCompletion;
- (BOOL)needEnterFromLeft;
- (BOOL)needHideFromRight;
- (id)playCompletion;
- (void)setPlayCompletion:;
- (void)startLeavingAnimationOn:shouldReduceFPS:;
- (void).cxx_destruct;
@end
