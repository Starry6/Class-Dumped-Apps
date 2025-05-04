@interface AWENearbyActiveStatusModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray subTitles;
@property (nonatomic) q nearbyActiveStatus;
@property (nonatomic) AWEUserModel user;
- (long long)nearbyActiveStatus;
- (void)setNearbyActiveStatus:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setSubTitles:;
- (id)subTitles;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
