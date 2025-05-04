@interface AWEDetailMVBottomActionViewManager : AWEDetailBottomActionViewManager
@property (nonatomic) UIView mvBottomView;
@property (nonatomic) AWEDetailMVMaterialSlotsView slotsView;
- (double)bottomViewHeight;
- (void)bindViewModel;
- (void)updateBottomActionButtonConfigs;
- (void)p_updateCollectButton:;
- (void)updateShootButtonToImageShootSameStyle;
- (void)updateShootButtonToCutSameStyle;
- (void)updateSlotsView;
- (id)slotsView;
- (id)mvBottomView;
- (void)setMvBottomView:;
- (void)setSlotsView:;
- (void).cxx_destruct;
- (id)bottomView;
@end
