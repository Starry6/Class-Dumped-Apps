@interface AWELocalDBUserModel : AWELocalUserCenterBaseModel
@property (nonatomic) q lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString shortID;
@property (nonatomic) NSString uniqueID;
@property (nonatomic) NSString nickname;
@property (nonatomic) AWEURLModel avatarThumb;
@property (nonatomic) AWEUserAccountCertInfoModel accountCertInfo;
@property (nonatomic) NSString signature;
@property (nonatomic) q followStatus;
@property (nonatomic) q followerStatus;
@property (nonatomic) NSString customVerifyInfo;
@property (nonatomic) NSString enterpriseVerifyInfo;
@property (nonatomic) Q verificationType;
@property (nonatomic) q privateAccount;
@property (nonatomic) NSString mobileKey;
@property (nonatomic) q gender;
@property (nonatomic) NSString alias;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shortID;
- (id)secUserID;
- (void)setSecUserID:;
- (long long)followStatus;
- (id)avatarThumb;
- (void)setFollowStatus:;
- (long long)privateAccount;
- (void)setAvatarThumb:;
- (long long)followerStatus;
- (id)accountCertInfo;
- (id)userNameWithScene:;
- (id)initWithAweUser:;
- (id)aliasWithScene:;
- (void)setFollowerStatus:;
- (void)setAccountCertInfo:;
- (id)getIMUser;
- (void)setShortID:;
- (id)mobileKey;
- (void)setMobileKey:;
- (void)setPrivateAccount:;
- (id)customVerifyInfo;
- (void)setCustomVerifyInfo:;
- (id)getAweUser;
- (id)enterpriseVerifyInfo;
- (void)setEnterpriseVerifyInfo:;
- (id)userPropertyDetail;
- (id)signature;
- (id)nickname;
- (void)setSignature:;
- (id)alias;
- (unsigned long long)hash;
- (id)displayName;
- (id)uniqueID;
- (void)setGender:;
- (void)setUniqueID:;
- (long long)gender;
- (void).cxx_destruct;
- (id)targetTable;
- (BOOL)isEqual:;
- (void)setAlias:;
- (void)setNickname:;
- (id)copyWithZone:;
- (void)setVerificationType:;
- (unsigned long long)verificationType;
+ (id)shortID;
+ (id)secUserID;
+ (id)followStatus;
+ (id)avatarThumb;
+ (id)modifyTime;
+ (id)privateAccount;
+ (id)followerStatus;
+ (id)accountCertInfo;
+ (id)objectRelationalMappingForWCDB;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)avatarThumbJSONAdapter;
+ (id)accountCertInfoJSONTransformer;
+ (id)followStatusJSONTransformer;
+ (id)mobileKey;
+ (id)customVerifyInfo;
+ (id)enterpriseVerifyInfo;
+ (id)followerStatusJSONTransformer;
+ (id)genderJSONTransformer;
+ (id)signature;
+ (id)nickname;
+ (id)alias;
+ (id)userID;
+ (id)uniqueID;
+ (id)updateTime;
+ (id)isDeleted;
+ (id)gender;
+ (id)verificationType;
+ (id)JSONKeyPathsByPropertyKey;
@end
