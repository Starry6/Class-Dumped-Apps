@interface AWEFeedPiPPanelRadioCell : AWEFeedPiPPanelCell
@property (nonatomic) @? radioActionBlock;
@property (nonatomic) DUXRadioBox radioBox;
- (id)radioBox;
- (void)setRadioBox:;
- (void)setRadioActionBlock:;
- (id)radioActionBlock;
- (id)initWithTitle:subTitle:radioIsOn:radioActionBlock:;
- (void)radioAction;
- (void).cxx_destruct;
- (void)setupUI;
@end
