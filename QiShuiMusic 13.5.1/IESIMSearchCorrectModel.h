@interface IESIMSearchCorrectModel : IESIMBaseApiModel
@property (nonatomic) Q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString defaultKeyword;
- (id)defaultKeyword;
- (void)setDefaultKeyword:;
- (void)setType:;
- (void)setTitle:;
- (unsigned long long)type;
- (id)title;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
