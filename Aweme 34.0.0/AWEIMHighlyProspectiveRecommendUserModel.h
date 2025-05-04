@interface AWEIMHighlyProspectiveRecommendUserModel : AWEBaseApiModel
@property (nonatomic) q uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickname;
@property (nonatomic) AWEIMHighlyProspectiveRecommendURLModel avatarThumb;
@property (nonatomic) NSString recommendReason;
- (id)avatarThumb;
- (id)secUid;
- (void)setAvatarThumb:;
- (void)setSecUid:;
- (void)setRecommendReason:;
- (id)recommendReason;
- (id)nickname;
- (void)setUid:;
- (long long)uid;
- (void).cxx_destruct;
- (void)setNickname:;
+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
