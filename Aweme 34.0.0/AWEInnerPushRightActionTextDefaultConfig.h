@interface AWEInnerPushRightActionTextDefaultConfig : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString defaultText;
@property (nonatomic) NSArray skipRuleArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skipRuleArray;
- (void)setSkipRuleArray:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
- (void)setDefaultText:;
- (id)defaultText;
+ (id)skipRuleArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
