@interface AWENaviDuetModifyBackgroundView : UIView
@property (nonatomic) AWENaviDuetModifyBackgroundPanelView panelView;
@property (nonatomic) NSArray backgrounds;
@property (nonatomic) @? onClosedBlock;
@property (nonatomic) @? onSelectedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)panelView;
- (void)setOnSelectedBlock:;
- (id)onSelectedBlock;
- (void)showPanelCompletion:;
- (void)removePanelCompletion:;
- (void)setOnClosedBlock:;
- (void)setPanelView:;
- (id)onClosedBlock;
- (void)setBackgrounds:;
- (void)updateSelectedBackgroundWithIndex:;
- (id)backgrounds;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)handleTapGesture:;
@end
