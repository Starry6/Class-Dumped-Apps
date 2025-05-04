@interface AWEContentLanguageModel : AWEBaseApiModel
@property (nonatomic) NSString code;
@property (nonatomic) NSString enName;
@property (nonatomic) NSString localName;
- (id)enName;
- (void)setEnName:;
- (id)code;
- (void)setCode:;
- (id)localName;
- (void).cxx_destruct;
- (void)setLocalName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
