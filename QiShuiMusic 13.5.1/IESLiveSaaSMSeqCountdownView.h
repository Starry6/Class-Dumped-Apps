@interface IESLiveSaaSMSeqCountdownView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView authIcon;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel sentenceLabel;
@property (nonatomic) IESLiveSaaSPBUser offcialChannelUser;
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSInteger countDownSeconds;
- (id)authIcon;
- (id)initWithOffcialChannelUser:;
- (id)offcialChannelUser;
- (id)sentenceLabel;
- (void)setAuthIcon:;
- (void)setOffcialChannelUser:;
- (void)setSentenceLabel:;
- (void)dismiss;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (id)nameLabel;
- (void)setupView;
- (void)setNameLabel:;
- (void)countdown;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (int)countDownSeconds;
- (void)setCountDownSeconds:;
@end
