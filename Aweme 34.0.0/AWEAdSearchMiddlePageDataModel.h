@interface AWEAdSearchMiddlePageDataModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) AWESearchFullScreenAdEggPreloadModel adEggPreloadModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adEggPreloadModel;
- (void)setAdEggPreloadModel:;
- (unsigned long long)modelType;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)adEggPreloadModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
