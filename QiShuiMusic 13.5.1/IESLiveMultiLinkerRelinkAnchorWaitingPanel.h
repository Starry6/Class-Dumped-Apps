@interface IESLiveMultiLinkerRelinkAnchorWaitingPanel : HTSLivePopUpView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSArray invitedUsers;
@property (nonatomic) NSMutableArray playerItemViews;
@property (nonatomic) @? cancelActionBlock;
- (id)playerItemViews;
- (id)cancelActionBlock;
- (id)initWithFrame:diContext:invitedUsersArray:;
- (void)setCancelActionBlock:;
- (void)setInvitedUsers:;
- (void)setPlayerItemViews:;
- (void)setupBaseView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)invitedUsers;
- (void)didTapCancelButton;
@end
