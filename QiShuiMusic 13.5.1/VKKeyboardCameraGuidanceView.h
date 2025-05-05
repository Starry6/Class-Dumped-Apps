@interface VKKeyboardCameraGuidanceView : UIView
@property (nonatomic) double preferredMaxLayoutWidth;
- (void)didMoveToSuperview;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:;
- (double)preferredMaxLayoutWidth;
- (void).cxx_destruct;
- (void)setPreferredMaxLayoutWidth:;
- (void)_reallyShowGuidance;
- (void)_reallyHideGuidance;
- (void)showGuidanceWithText:;
- (void)hideGuidance;
@end
