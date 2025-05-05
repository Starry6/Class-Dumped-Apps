@interface BDASifXBridgeGetAdUserProfileMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString userId;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString avatar;
- (id)secUid;
- (void)setSecUid:;
- (id)userId;
- (id)nickname;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setNickname:;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end
