@interface IESLiveAudioEmptyAvatarView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView joinImage;
@property (nonatomic) UIImageView lockedImageView;
@property (nonatomic) UIImageView guestBattleImageView;
@property (nonatomic) UIImageView dynamicImageView;
@property (nonatomic) UIColor bgColor;
@property (nonatomic) <IESLiveAudioSeatViewModelOutputForAll> viewModel;
- (id)lockedImageView;
- (id)dynamicImageView;
- (id)guestBattleImageView;
- (id)joinImage;
- (void)setDynamicImageView:;
- (void)setGuestBattleImageView:;
- (void)setJoinImage:;
- (void)setLockedImageView:;
- (void)updateHiddenWithType:;
- (void)updateJoinUrls;
- (id)textLabel;
- (id)viewModel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)setTextLabel:;
- (id)bgColor;
- (void)setBgColor:;
@end
