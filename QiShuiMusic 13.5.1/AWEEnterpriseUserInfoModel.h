@interface AWEEnterpriseUserInfoModel : MTLModel
@property (nonatomic) NSArray permissions;
@property (nonatomic) NSArray profileHeaderImageURLs;
@property (nonatomic) NSString eRoleKey;
@property (nonatomic) NSString atticInfoPicUrl;
@property (nonatomic) NSString atticInfoIronManUrl;
@property (nonatomic) BOOL isShowPontential;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)atticInfoPicUrl;
- (id)atticInfoIronManUrl;
- (id)eRoleKey;
- (BOOL)isShowPontential;
- (id)profileHeaderImageURLs;
- (void)setAtticInfoIronManUrl:;
- (void)setAtticInfoPicUrl:;
- (void)setERoleKey:;
- (void)setIsShowPontential:;
- (void)setProfileHeaderImageURLs:;
- (id)permissions;
- (void).cxx_destruct;
- (void)setPermissions:;
+ (id)permissionsJSONTransformer;
+ (id)profileHeaderImageURLsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
