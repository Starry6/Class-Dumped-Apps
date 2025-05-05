@interface BDASifXBridgeUserInfoMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString avatar_url;
@property (nonatomic) NSString bind_phone;
@property (nonatomic) NSNumber is_login;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString sec_user_id;
@property (nonatomic) NSString unique_id;
@property (nonatomic) NSString user_id;
- (void)setSec_user_id:;
- (id)avatar_url;
- (id)bind_phone;
- (id)is_login;
- (id)sec_user_id;
- (void)setAvatar_url:;
- (void)setBind_phone:;
- (void)setIs_login:;
- (void)setUser_id:;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:;
- (id)unique_id;
- (void)setUnique_id:;
- (id)user_id;
+ (id)JSONKeyPathsByPropertyKey;
@end
