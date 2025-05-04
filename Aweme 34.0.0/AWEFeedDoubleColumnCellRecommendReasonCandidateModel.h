@interface AWEFeedDoubleColumnCellRecommendReasonCandidateModel : AWEBaseApiModel
@property (nonatomic) AWEFeedDoubleColumnCellRecommendReasonStaticLabel staticLabel;
@property (nonatomic) q businessID;
@property (nonatomic) q priority;
- (id)staticLabel;
- (void)setStaticLabel:;
- (long long)businessID;
- (void)setBusinessID:;
- (long long)priority;
- (void)setPriority:;
- (void).cxx_destruct;
+ (id)staticLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
