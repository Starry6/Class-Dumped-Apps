@interface AWECodeGenChargePermissonInfoModel : AWEBaseDataModel
@property (nonatomic) q type;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL permission;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString schemaText;
@property (nonatomic) NSArray denySubTypesArray;
- (id)schemaText;
- (void)setSchemaText:;
- (id)denySubTypesArray;
- (void)setDenySubTypesArray:;
- (id)schema;
- (BOOL)permission;
- (void)setSchema:;
- (void)setPermission:;
- (void)setText:;
- (id)text;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
