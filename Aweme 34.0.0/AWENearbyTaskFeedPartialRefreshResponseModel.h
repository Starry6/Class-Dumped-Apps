@interface AWENearbyTaskFeedPartialRefreshResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray feedUpdateInfoList;
- (id)feedUpdateInfoList;
- (void)setFeedUpdateInfoList:;
- (void).cxx_destruct;
+ (id)feedUpdateInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
