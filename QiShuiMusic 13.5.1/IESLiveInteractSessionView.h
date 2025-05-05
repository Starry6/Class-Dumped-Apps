@interface IESLiveInteractSessionView : NSObject
@property (nonatomic) UIView rtcView;
@property (nonatomic) UIView videoView;
@property (nonatomic) UIView optionView;
@property (nonatomic) BOOL isHost;
- (id)rtcView;
- (void)setIsHost:;
- (void)setRtcView:;
- (void)setVideoView:;
- (void).cxx_destruct;
- (id)videoView;
- (BOOL)isHost;
- (void)setOptionView:;
- (id)optionView;
@end
