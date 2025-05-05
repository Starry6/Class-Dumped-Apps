@interface AWEIMRTVListSelectBaseTableViewCell : AWEIMUserTableViewCell
@property (nonatomic) AWEIMRTVListSelectBaseTableViewCellContext context;
@property (nonatomic) UILabel friendLabel;
- (void)__configComponents;
- (void)__configVoipFriendLabel;
- (void)__createComponents;
- (void)__createVoipFriendLabel;
- (BOOL)__isFollowStatusFriends;
- (BOOL)__isLightStyle;
- (void)__layoutComponents;
- (void)__layoutNameLabel;
- (void)__layoutVoipFriendLabel;
- (void)__updateComponents;
- (void)__updateVoipFriendLabel;
- (id)awemeUpdateCountLabel;
- (id)friendLabel;
- (void)renderModel:context:;
- (id)sigLabel;
- (id)verifiedLogoView;
- (id)initWithStyle:reuseIdentifier:;
- (id)context;
- (void)layoutSubviews;
- (void)refreshUI;
- (void).cxx_destruct;
@end
