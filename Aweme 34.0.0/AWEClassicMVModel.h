@interface AWEClassicMVModel : IESEffectModel
@property (nonatomic) Q usageAmount;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) AWEUserModel author;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (unsigned long long)usageAmount;
- (void)setUsageAmount:;
- (id)author;
- (void).cxx_destruct;
- (void)setAuthor:;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
