@interface IESIMGeneralFilmTVLeadingCreatorInfoModel : IESIMBaseApiModel
@property (nonatomic) NSString creatorId;
@property (nonatomic) IESIMURLModel avatar;
@property (nonatomic) NSString realName;
@property (nonatomic) NSString roleName;
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber verificationType;
@property (nonatomic) NSNumber schemaType;
- (void)setRoleName:;
- (void)setSchemaType:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)schemaType;
- (id)avatar;
- (void)setAvatar:;
- (id)verificationType;
- (void)setVerificationType:;
- (id)realName;
- (void)setRealName:;
- (id)roleName;
- (id)creatorId;
- (void)setCreatorId:;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
