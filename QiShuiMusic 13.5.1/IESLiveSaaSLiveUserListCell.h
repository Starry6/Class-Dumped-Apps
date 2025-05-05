@interface IESLiveSaaSLiveUserListCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSAvatarImageView avatarView;
@property (nonatomic) NSString avatarUri;
@property (nonatomic) IESLiveSaaSPaddingLabel contributedThisRoomLabel;
@property (nonatomic) IESLiveSaaSAudienceModel liveUserListUserModel;
@property (nonatomic) BOOL isUserCountFromUserSeqMessage;
- (id)avatarUri;
- (id)contributedThisRoomLabel;
- (id)handleLabelStr:audience:;
- (BOOL)isUserCountFromUserSeqMessage;
- (id)liveUserListUserModel;
- (void)refreshWithUser:;
- (void)setAvatarUri:;
- (void)setContributedThisRoomLabel:;
- (void)setIsUserCountFromUserSeqMessage:;
- (void)setLiveUserListUserModel:;
- (id)avatarView;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
