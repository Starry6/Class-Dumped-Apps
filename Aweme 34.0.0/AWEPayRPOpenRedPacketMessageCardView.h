@interface AWEPayRPOpenRedPacketMessageCardView : AWEPayRPOpenRedPacketBaseCardView
@property (nonatomic) UIImageView openBtnImageView;
@property (nonatomic) AWEPayVolumeControlView volumeView;
- (void)setVolumeView:;
- (void)setupOpenTaskView;
- (void)openRedPackage;
- (id)openBtnImageView;
- (void)setOpenBtnImageView:;
- (id)p_rpInfoTitle;
- (BOOL)p_isDetailBtnHidden;
- (id)p_exclusiveTitleWithCardConfigModel:;
- (void)startLoading;
- (void)updateContent;
- (void)stopLoading;
- (void).cxx_destruct;
- (void)setupUI;
- (id)volumeView;
@end
