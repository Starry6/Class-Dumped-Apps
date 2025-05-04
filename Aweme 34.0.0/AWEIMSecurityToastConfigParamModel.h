@interface AWEIMSecurityToastConfigParamModel : AWEBaseApiModel
@property (nonatomic) q paramType;
@property (nonatomic) NSString key;
@property (nonatomic) NSString text;
@property (nonatomic) NSString target;
- (void)setParamType:;
- (id)target;
- (void)setKey:;
- (void)setText:;
- (long long)paramType;
- (id)key;
- (id)text;
- (void)setTarget:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
