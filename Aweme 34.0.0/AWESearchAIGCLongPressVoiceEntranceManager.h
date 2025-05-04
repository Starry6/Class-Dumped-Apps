@interface AWESearchAIGCLongPressVoiceEntranceManager : NSObject
@property (nonatomic) AWESearchAIGCSSEResultViewController currentAigcVC;
@property (nonatomic) BOOL isInVoiceLongPress;
- (void)handleAIGCForLongPressWithGestureRecognizer:extraParams:;
- (void)setIsInVoiceLongPress:;
- (void)handleAIGCJumpAfterCheckMicroPhoneAuth:hasGranted:gestureRecognizer:extraParams:;
- (void)checkMicroPhoneAuthWithExtraParams:completion:;
- (void)jumpToAIGCResultPage:showVoiceMiddlePage:;
- (BOOL)isInVoiceLongPress;
- (id)currentAigcVC;
- (void)setCurrentAigcVC:;
- (void)jumpToAIGCResultPage:showVoiceMiddlePage:completion:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
