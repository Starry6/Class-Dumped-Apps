@interface AWECodeGenRelativeUserModel : AWEBaseDataModel
@property (nonatomic) q uid;
@property (nonatomic) AWECodeGenUrlModel avatarModel;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString remarkName;
@property (nonatomic) AWECodeGenUrlModel avatarLargerModel;
@property (nonatomic) AWECodeGenUrlModel avatarThumbModel;
@property (nonatomic) q followStatus;
@property (nonatomic) NSString secUid;
- (long long)followStatus;
- (id)secUid;
- (id)remarkName;
- (void)setFollowStatus:;
- (void)setSecUid:;
- (id)avatarThumbModel;
- (void)setAvatarThumbModel:;
- (id)avatarModel;
- (void)setRemarkName:;
- (void)setAvatarModel:;
- (id)avatarLargerModel;
- (void)setAvatarLargerModel:;
- (id)nickname;
- (void)setUid:;
- (long long)uid;
- (void).cxx_destruct;
- (void)setNickname:;
+ (id)JSONKeyPathsByPropertyKey;
@end
