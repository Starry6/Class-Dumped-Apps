@interface AWEHomePageRemoteCommonRadioBoxDataModel : AWEHomePageRemoteItemDataModel
@property (nonatomic) q style;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray radioButtonModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)radioButtonModels;
- (void)setRadioButtonModels:;
- (long long)style;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
- (BOOL)isModelValid;
+ (id)radioButtonModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
