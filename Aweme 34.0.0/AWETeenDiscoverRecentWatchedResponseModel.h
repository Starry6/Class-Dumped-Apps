@interface AWETeenDiscoverRecentWatchedResponseModel : AWEBaseApiModel
@property (nonatomic) AWETeenDiscoverBlockModel recentWatch;
@property (nonatomic) NSArray ageDesc;
- (void)setAgeDesc:;
- (id)ageDesc;
- (id)recentWatch;
- (void)setRecentWatch:;
- (void).cxx_destruct;
+ (id)recentWatchJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
