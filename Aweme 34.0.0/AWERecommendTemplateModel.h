@interface AWERecommendTemplateModel : MTLModel
@property (nonatomic) q templateID;
@property (nonatomic) NSString templateString;
@property (nonatomic) NSArray valueList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)valueList;
- (void)setTemplateString:;
- (void)setValueList:;
- (long long)templateID;
- (void)setTemplateID:;
- (void).cxx_destruct;
- (id)templateString;
+ (id)JSONKeyPathsByPropertyKey;
@end
