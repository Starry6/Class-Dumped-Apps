@interface IESLiveInteractionCloseMicPanel : UIView
@property (nonatomic) BOOL neverRemind;
@property (nonatomic) UIImageView neverRemindCircle;
@property (nonatomic) @? actionBlock;
- (void)setNeverRemind:;
- (double)fitLength:;
- (id)initWithFrame:anchorName:;
- (void)layoutUI:;
- (BOOL)neverRemind;
- (id)neverRemindCircle;
- (void)onCancelButtonClicked;
- (void)onCloseMicButtonClicked;
- (void)onNeverRemindButtonClicked;
- (void)setNeverRemindCircle:;
- (id)actionBlock;
- (void).cxx_destruct;
- (void)setActionBlock:;
@end
