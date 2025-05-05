@interface IESLiveSaaSAudioStatusView : UIView
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) IESLiveSaaSAudioFeedBackgroundView audioBackgroundView;
- (id)audioBackgroundView;
- (void)p_commomInit;
- (id)roomModel;
- (void)setAudioBackgroundView:;
- (void)setRoomModel:;
- (void)updateWithRoomModel:;
- (id)init;
- (void).cxx_destruct;
@end
