@interface AWEContentLanguageModel : IESIMBaseApiModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString enName;
@property (nonatomic) NSString localName;
- (id)enName;
- (void)setEnName:;
- (id)localName;
- (id)code;
- (void).cxx_destruct;
- (void)setCode:;
- (void)setLocalName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
