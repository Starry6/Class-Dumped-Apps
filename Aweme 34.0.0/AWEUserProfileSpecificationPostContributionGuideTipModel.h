@interface AWEUserProfileSpecificationPostContributionGuideTipModel : AWEUserProfileSpecificationTipModel
@property (nonatomic) q contributionGuideShowType;
@property (nonatomic) AWEUserProfileSpecificationPostContributionGuideTip publishGuideTip;
@property (nonatomic) NSMutableDictionary deallocBlockDict;
- (void)setContributionGuideShowType:;
- (long long)contributionGuideShowType;
- (id)deallocBlockDict;
- (id)publishGuideTip;
- (void)setPublishGuideTip:;
- (void)setDeallocBlockDict:;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)publishGuideTipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
