@interface IESLivePKSpeedRemindOptionPanel : HTSLivePopUpView
@property (nonatomic) UIButton waitButton;
@property (nonatomic) UIButton speedButton;
@property (nonatomic) IESLiveCountTimer countTimer;
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
- (void)setSpeedButton:;
- (void)setupCountTimer;
- (id)countTimer;
- (id)initWithFrame:roomModel:DIContext:;
- (void)setCountTimer:;
- (void)setWaitButton:;
- (void)showSpeedAutoMatchPanel;
- (id)speedButton;
- (void)speedButtonDidClick;
- (id)waitButton;
- (void)waitButtonDidClick;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (void)layoutUI;
@end
