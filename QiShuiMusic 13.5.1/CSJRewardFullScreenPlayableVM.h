@interface CSJRewardFullScreenPlayableVM : CSJRewardFullScreenBaseVM
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)leftLblControl:;
- (void)clickButtonTapFromPlayableLoading;
- (void)closeBtnControl:;
- (void)handlePurePlayablePlayFinish;
- (id)initViewModelWithMeta:rootViewController:slot:;
- (BOOL)isPlayableRenderFailed;
- (void)purePlayableRemoveLoadingByTimeout;
- (void)purePlayableVolumeChange:isMute:;
- (void)rewardReport;
- (void)rewardedVideoWebViewControllerOpenUrlWithParams:;
- (void)updateLeftSeconds:;
- (void)vmLoadData;
- (void)stopTimer;
- (void)dealloc;
- (void)startTimer;
@end
