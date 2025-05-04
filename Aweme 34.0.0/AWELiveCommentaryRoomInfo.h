@interface AWELiveCommentaryRoomInfo : AWEBaseApiModel
@property (nonatomic) q userId;
@property (nonatomic) AWEURLModel avatar;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString title;
@property (nonatomic) q roomId;
- (long long)roomId;
- (void)setRoomId:;
- (id)nickname;
- (long long)userId;
- (void).cxx_destruct;
- (id)title;
- (void)setUserId:;
- (void)setTitle:;
- (void)setNickname:;
- (id)avatar;
- (void)setAvatar:;
+ (id)avatarJSONTransformer;
+ (id)parseModelFromOrigin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
