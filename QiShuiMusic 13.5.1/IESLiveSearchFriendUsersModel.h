@interface IESLiveSearchFriendUsersModel : IESLiveBridgeModel
@property (nonatomic) NSString nickname;
@property (nonatomic) NSNumber userId;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString avatarUrl;
@property (nonatomic) NSString account;
@property (nonatomic) IESLiveSearchFriendHighlightRangeModel highlightRange;
@property (nonatomic) NSNumber hitType;
- (id)hitType;
- (id)avatarUrl;
- (id)secUid;
- (void)setAvatarUrl:;
- (void)setHighlightRange:;
- (void)setHitType:;
- (void)setSecUid:;
- (id)account;
- (void)setAccount:;
- (id)userId;
- (id)nickname;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setNickname:;
- (id)highlightRange;
+ (id)modelCustomPropertyMapper;
@end
