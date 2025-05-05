@interface AWESettingSwitch : UISwitch
@property (nonatomic) UIView coverView;
@property (nonatomic) @? chooseBeforeStatusChangeBlock;
@property (nonatomic) @? switchStatusChangedBlock;
@property (nonatomic) BOOL shouldChooseBeforeChange;
@property (nonatomic) BOOL changeBlockNeedAnimation;
- (BOOL)changeBlockNeedAnimation;
- (id)chooseBeforeStatusChangeBlock;
- (void)respondHandler;
- (void)respondToSwipeGesture:;
- (void)setChangeBlockNeedAnimation:;
- (void)setChooseBeforeStatusChangeBlock:;
- (void)setEnabled:disableOpacity:;
- (void)setShouldChooseBeforeChange:;
- (void)setSwitchStatusChangedBlock:;
- (BOOL)shouldChooseBeforeChange;
- (void)switchStatusChanged:;
- (id)switchStatusChangedBlock;
- (id)init;
- (void)updateStatus;
- (void).cxx_destruct;
- (void)setOn:animated:;
- (void)respondToTapGesture:;
- (id)coverView;
- (void)setCoverView:;
@end
