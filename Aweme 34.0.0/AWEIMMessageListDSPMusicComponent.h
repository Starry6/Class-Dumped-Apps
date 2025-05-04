@interface AWEIMMessageListDSPMusicComponent : AWEIMComponentBase
@property (nonatomic) AWEIMDSPMusicServiceController dspMusicController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:;
- (void)recallMessage:toMessage:;
- (void)willDeleteMessage:;
- (id)playMessageMusicId;
- (id)playMessageID;
- (void)playWithMusicMessage:;
- (void)pauseWithMusicMessage:;
- (BOOL)hasMusicController;
- (void)cellDidTapped:withMessage:extraParams:;
- (id)dspMusicController;
- (void)playDspMusicIfNeeded:;
- (void)setDspMusicController:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
