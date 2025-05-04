@interface AWEDesktopSystemPictureInPictureViewModel : NSObject
@property (nonatomic) AWEDesktopSystemPopupGuideModel guideModel;
@property (nonatomic) double pipShowTime;
@property (nonatomic) BDUGFlowAuthToken token;
- (id)guideModel;
- (void)setGuideModel:;
- (void)trackPIPWindowEventWithType:ratio:;
- (void)trackPIPShowAction;
- (void)trackMidGuideWithAction:;
- (void)trackPIPStopActionWithPlayDuration:currentTime:;
- (id)getTrackPopType;
- (void)setPipShowTime:;
- (double)pipShowTime;
- (id)initWithGuideModel:;
- (void)pipControllerDidStartPictureInPicture:;
- (void)pipControllerWillStopPictureInPicture:;
- (void)pipController:failedToStartPictureInPictureWithError:;
- (void)minimalAppPerform;
- (void)pipControllerSetFreeWhenAppActive;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
@end
