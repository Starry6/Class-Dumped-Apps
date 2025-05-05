@interface IESLiveAudienceInteractiveFriendCellInviteButton : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> imageView;
@property (nonatomic) BOOL enabled;
@property (nonatomic) @? didClick;
- (id)didClick;
- (void)p_didClick;
- (void)setDidClick:;
- (void)updateType:;
- (id)init;
- (BOOL)enabled;
- (void)setLabel:;
- (id)label;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)layoutUI;
@end
