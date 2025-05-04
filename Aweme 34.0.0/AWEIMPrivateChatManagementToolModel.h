@interface AWEIMPrivateChatManagementToolModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSString name;
@property (nonatomic) NSString iconUrlLight;
@property (nonatomic) NSString iconUrlDark;
@property (nonatomic) NSString schema;
@property (nonatomic) q schemaType;
- (void)setSchemaType:;
- (id)iconUrlLight;
- (void)setIconUrlLight:;
- (id)iconUrlDark;
- (void)setIconUrlDark:;
- (id)schema;
- (long long)schemaType;
- (void)setSchema:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)JSONKeyPathsByPropertyKey;
@end
