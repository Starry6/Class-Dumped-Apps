@interface AWEEcommerceSearchPathHintCard : MTLModel
@property (nonatomic) q type;
@property (nonatomic) AWEEcommerceSearchPromptData promptData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)promptData;
- (void)setPromptData:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)promptDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
