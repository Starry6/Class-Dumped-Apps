@interface AWEUserIdentifyStructModel : AWEBaseApiModel
@property (nonatomic) NSArray identifies;
@property (nonatomic) AWEUserIdentifyModel identifyBeforeIdLabel;
- (id)identifies;
- (id)identifyBeforeIdLabel;
- (void)setIdentifies:;
- (void)setIdentifyBeforeIdLabel:;
- (void).cxx_destruct;
+ (id)identifiesJSONTransformer;
+ (id)identifyBeforeIdLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
