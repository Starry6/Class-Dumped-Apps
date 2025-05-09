@interface IESliveMultiLinkerMultiAutoMatchView : UIView
@property (nonatomic) UILabel mainTitle;
@property (nonatomic) UILabel subTitle;
@property (nonatomic) UIButton matchButton;
@property (nonatomic) UILabel disabledMatchLabel;
@property (nonatomic) UIButton speedupButton;
@property (nonatomic) UIView speedUpView;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) RivalsRecommendResponse_AutoMatchInfo autoMatchInfo;
@property (nonatomic) BOOL isTimeOut;
@property (nonatomic) BOOL isDoubleInteract;
@property (nonatomic) @? matchActionBlock;
@property (nonatomic) @? speedUpActionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPassivelySync;
- (void)setSpeedUpView:;
- (BOOL)isShowTimeCount;
- (void)setMatchButton:;
- (id)autoMatchInfo;
- (void)bindAction;
- (id)countDownStr:;
- (id)disabledMatchLabel;
- (void)highWayStyle;
- (id)initWithRecommendModel:isDoubleInteract:diContext:;
- (BOOL)isDoubleInteract;
- (BOOL)isTimeOut;
- (id)matchActionBlock;
- (id)matchButton;
- (void)multiLinkerUserService:didInteractiveListUpdated:;
- (void)onMatchButtonClicked;
- (id)predictWaitLabelText;
- (id)predictWaitStrWithSec:;
- (void)setAutoMatchInfo:;
- (void)setDisabledMatchLabel:;
- (void)setIsDoubleInteract:;
- (void)setIsTimeOut:;
- (void)setMatchActionBlock:;
- (void)setSpeedUpActionBlock:;
- (void)setSpeedupButton:;
- (void)setupBaseView;
- (void)setupMatchButton;
- (void)speedButtonClicked;
- (id)speedUpActionBlock;
- (id)speedUpFindingString;
- (id)speedUpView;
- (id)speedupButton;
- (void)updateMatchButtonStyle;
- (void)updateViewToPhase:;
- (void)setTimeLabel:;
- (id)timeLabel;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (id)mainTitle;
- (void)setMainTitle:;
@end
