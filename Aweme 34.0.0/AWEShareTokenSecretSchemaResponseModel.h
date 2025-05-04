@interface AWEShareTokenSecretSchemaResponseModel : MTLModel
@property (nonatomic) Q st;
@property (nonatomic) NSString msg;
@property (nonatomic) AWEShareTokenSecretSchemaDataResponseModel data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSt:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (unsigned long long)st;
- (void)setMsg:;
- (id)msg;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
