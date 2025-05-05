@interface IESIMRecommendTemplateModel : MTLModel
@property (nonatomic) q templateID;
@property (nonatomic) NSString templateString;
@property (nonatomic) NSArray valueList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTemplateString:;
- (void)setValueList:;
- (id)valueList;
- (long long)templateID;
- (void)setTemplateID:;
- (id)templateString;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
