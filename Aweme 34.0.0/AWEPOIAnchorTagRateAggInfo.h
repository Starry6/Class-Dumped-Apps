@interface AWEPOIAnchorTagRateAggInfo : MTLModel
@property (nonatomic) q showTagRateTab;
@property (nonatomic) q showRateGrade;
@property (nonatomic) q totalCount;
@property (nonatomic) NSString tagRateTypeText;
@property (nonatomic) NSString rateRouterUrl;
@property (nonatomic) NSString tabText;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)setTrackParams:;
- (long long)showTagRateTab;
- (void)setShowTagRateTab:;
- (long long)showRateGrade;
- (void)setShowRateGrade:;
- (id)tagRateTypeText;
- (void)setTagRateTypeText:;
- (id)rateRouterUrl;
- (void)setRateRouterUrl:;
- (id)tabText;
- (void)setTabText:;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
