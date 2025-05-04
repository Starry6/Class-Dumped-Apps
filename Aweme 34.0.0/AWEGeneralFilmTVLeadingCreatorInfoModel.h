@interface AWEGeneralFilmTVLeadingCreatorInfoModel : AWEBaseApiModel
@property (nonatomic) NSString creatorId;
@property (nonatomic) AWEURLModel avatar;
@property (nonatomic) NSString realName;
@property (nonatomic) NSString roleName;
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber verificationType;
@property (nonatomic) NSNumber schemaType;
- (void)setSchemaType:;
- (void)setRoleName:;
- (id)schema;
- (id)schemaType;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)avatar;
- (void)setAvatar:;
- (void)setVerificationType:;
- (id)verificationType;
- (id)realName;
- (void)setRealName:;
- (id)roleName;
- (id)creatorId;
- (void)setCreatorId:;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
