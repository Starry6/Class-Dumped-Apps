@interface IESLiveInteractReplacePanelView : UIView
@property (nonatomic) IESLiveInteractReplacePanelViewModel model;
@property (nonatomic) UILabel topLabel;
@property (nonatomic) UIButton bottomBtn;
@property (nonatomic) NSMutableArray slotViews;
- (void)addSuscriber;
- (id)bottomBtn;
- (void)didSetAttachingDIContext;
- (void)onCellClick:;
- (void)onComfirmBlockClick;
- (void)renderSlots;
- (void)setBottomBtn:;
- (void)setSlotViews:;
- (id)slotViews;
- (void)startRender:;
- (id)model;
- (void)setModel:;
- (id)initWithModel:;
- (void).cxx_destruct;
- (id)topLabel;
- (void)setTopLabel:;
@end
