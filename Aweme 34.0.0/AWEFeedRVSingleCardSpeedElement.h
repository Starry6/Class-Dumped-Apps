@interface AWEFeedRVSingleCardSpeedElement : AWEFeedRVSingleCardBaseElement
@property (nonatomic) UIButton speedButton;
@property (nonatomic) NSArray speedNumArray;
- (void)initializeElement;
- (void)bindEvent;
- (id)speedButton;
- (void)setSpeedButton:;
- (void)updatePlaySpeed:;
- (void)updateSpeedButtonForLongPressPanelOpti:;
- (void)trackSpeedModePlayTimeWithPreSpeed:;
- (id)speedNumArray;
- (void)setSpeedNumArray:;
- (void)unSelected;
- (void)updatePlaySpeedWithCurrentPlayer;
- (void)trackChangeSpeedModeWithSpeed:;
- (void)speedBtnClicked;
- (id)speedArrayForLongPressPanelOpti;
- (void)play;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
