@interface AWELiveVSShowDistributionInfo : AWEBaseApiModel
@property (nonatomic) NSString recommendText;
@property (nonatomic) AWELiveVSStartHighlight modelMatchedHl;
- (id)recommendText;
- (void)setRecommendText:;
- (id)modelMatchedHl;
- (void)setModelMatchedHl:;
- (void).cxx_destruct;
+ (id)modelMatchedHlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
