@interface AWEShareActionSetting : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) q type;
@property (nonatomic) NSString actionType;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionType;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
