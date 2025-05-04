@interface AWEMVLocalExperimentConfig : MTLModel
@property (nonatomic) NSArray experiments;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setExperiments:;
- (id)experiments;
+ (id)experimentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
