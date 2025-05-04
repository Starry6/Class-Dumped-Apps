@interface AWEIMGroupActionCheckActionRule : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL isMatch;
@property (nonatomic) Q ruleTye;
- (BOOL)isMatch;
- (void)setIsMatch:;
- (unsigned long long)ruleTye;
- (void)setRuleTye:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)ruleTyeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
