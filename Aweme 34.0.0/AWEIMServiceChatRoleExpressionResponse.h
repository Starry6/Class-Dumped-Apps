@interface AWEIMServiceChatRoleExpressionResponse : MTLModel
@property (nonatomic) NSArray texts;
@property (nonatomic) NSArray firstLineItems;
@property (nonatomic) NSArray secondLineItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transToString;
- (id)firstLineItems;
- (id)secondLineItems;
- (void)setFirstLineItems:;
- (void)setSecondLineItems:;
- (void).cxx_destruct;
- (void)setTexts:;
- (id)texts;
+ (id)firstLineItemsJSONTransformer;
+ (id)secondLineItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
