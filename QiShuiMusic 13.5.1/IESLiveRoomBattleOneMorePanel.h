@interface IESLiveRoomBattleOneMorePanel : IESLiveInteractionPopupViewController
@property (nonatomic) IESLiveRoomBattleApi roomBattleApi;
@property (nonatomic) BOOL isRoomBattleRefactor;
- (void)didTapFinishButton;
- (void)didTapOneMoreButton;
- (void)didTapSettingButton;
- (id)initWithDIContext:;
- (BOOL)isRoomBattleRefactor;
- (void)onSetupNavBar:;
- (id)resourceName:;
- (id)roomBattleApi;
- (void)setIsRoomBattleRefactor:;
- (void)setRoomBattleApi:;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
@end
