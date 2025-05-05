@interface IESLivePlayerTipViewModel : NSObject
@property (nonatomic) UIButton tipButton;
@property (nonatomic) BOOL playeriSRender;
@property (nonatomic) <IESLiveRoomServiceAdapter> mixedRoom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)changeVSFirstTipsWithOrientation:;
- (void)didSetAttachingDIContext;
- (id)mixedRoom;
- (void)onStreamProgressUpdate:start:latest:;
- (BOOL)playeriSRender;
- (void)setMixedRoom:;
- (void)setPlayeriSRender:;
- (void)setTipButton:;
- (void)showVsTips;
- (void)showVsTipsIfNeed;
- (void)streamPlayerDidReadyToRender;
- (id)tipButton;
- (void)touchVsTips;
- (void).cxx_destruct;
- (id)initWithRoom:;
@end
