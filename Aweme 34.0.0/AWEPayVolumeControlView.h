@interface AWEPayVolumeControlView : UIView
@property (nonatomic) UIImageView muteIcon;
@property (nonatomic) UIImageView noMuteIcon;
@property (nonatomic) BOOL isMute;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) @? volumeBlock;
- (void)setIsMute:;
- (void)setMuteIcon:;
- (id)muteIcon;
- (void)setVolumeBlock:;
- (id)noMuteIcon;
- (void)p_mute:;
- (id)volumeBlock;
- (void)setNoMuteIcon:;
- (id)init;
- (void).cxx_destruct;
- (id)tap;
- (void)setTap:;
- (BOOL)isMute;
- (void)p_init;
@end
