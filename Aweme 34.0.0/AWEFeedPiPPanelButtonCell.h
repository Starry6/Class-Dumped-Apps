@interface AWEFeedPiPPanelButtonCell : AWEFeedPiPPanelCell
@property (nonatomic) DUXButton button;
@property (nonatomic) @? buttonActionBlock;
- (id)initWithTitle:subTitle:buttonTitle:buttonActionBlock:;
- (void)setButton:;
- (void).cxx_destruct;
- (id)button;
- (void)buttonAction;
- (void)setupUI;
- (id)buttonActionBlock;
- (void)setButtonActionBlock:;
@end
