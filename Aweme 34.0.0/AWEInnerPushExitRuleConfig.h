@interface AWEInnerPushExitRuleConfig : MTLModel
@property (nonatomic) NSArray templateTagArray;
@property (nonatomic) NSArray groupTagArray;
@property (nonatomic) NSArray typeTagArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)templateTagArray;
- (id)groupTagArray;
- (id)typeTagArray;
- (void)setTemplateTagArray:;
- (void)setGroupTagArray:;
- (void)setTypeTagArray:;
- (void).cxx_destruct;
+ (id)templateTagArrayJSONTransformer;
+ (id)groupTagArrayJSONTransformer;
+ (id)typeTagArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
