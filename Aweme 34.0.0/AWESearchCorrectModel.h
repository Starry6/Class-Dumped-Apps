@interface AWESearchCorrectModel : AWEBaseApiModel
@property (nonatomic) Q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString defaultKeyword;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString defaultKeyword;
- (id)defaultKeyword;
- (void)setDefaultKeyword:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
