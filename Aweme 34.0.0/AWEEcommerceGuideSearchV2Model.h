@interface AWEEcommerceGuideSearchV2Model : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSArray tabs;
@property (nonatomic) Q cardStyle;
@property (nonatomic) AWEEcommerceGuideSearchV2ActivityAtmosphereModel activityAtmosphere;
- (id)activityAtmosphere;
- (void)setActivityAtmosphere:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)tabs;
- (unsigned long long)cardStyle;
- (void)setTabs:;
- (void)setCardStyle:;
+ (id)tabsJSONTransformer;
+ (id)activityAtmosphereJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
