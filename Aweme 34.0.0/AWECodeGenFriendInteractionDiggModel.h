@interface AWECodeGenFriendInteractionDiggModel : AWEBaseDataModel
@property (nonatomic) NSString userId;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString remarkName;
@property (nonatomic) NSString secUid;
@property (nonatomic) AWECodeGenUrlModel avatarModel;
- (id)secUid;
- (id)remarkName;
- (void)setSecUid:;
- (id)avatarModel;
- (void)setRemarkName:;
- (void)setAvatarModel:;
- (id)nickname;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setNickname:;
+ (id)JSONKeyPathsByPropertyKey;
@end
