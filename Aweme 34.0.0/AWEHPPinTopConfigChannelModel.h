@interface AWEHPPinTopConfigChannelModel : MTLModel
@property (nonatomic) NSString tabID;
@property (nonatomic) NSArray commonModels;
@property (nonatomic) NSArray customModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabID:;
- (id)customModels;
- (id)commonModels;
- (void)setCommonModels:;
- (void)setCustomModels:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)tabID;
+ (id)customModelsJSONTransformer;
+ (id)commonModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
