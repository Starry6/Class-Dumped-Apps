@interface IESLiveSaaSCommentaryRoomInfo : BDDynamicMTLModel
@property (nonatomic) NSString openId;
@property (nonatomic) IESLiveSaaSImage avatar;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString title;
@property (nonatomic) q roomId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)openId;
- (long long)roomId;
- (void)setOpenId:;
- (void)setRoomId:;
- (void)setTitle:;
- (id)nickname;
- (id)title;
- (void).cxx_destruct;
- (void)setNickname:;
- (id)avatar;
- (void)setAvatar:;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
