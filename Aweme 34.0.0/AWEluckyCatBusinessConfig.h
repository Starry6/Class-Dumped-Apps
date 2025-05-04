@interface AWEluckyCatBusinessConfig : MTLModel
@property (nonatomic) Q widgetCollectSwitchState;
@property (nonatomic) Q bannerCollectSwitchState;
@property (nonatomic) Q innerpushCollectSwitchState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)widgetCollectSwitchState;
- (void)setWidgetCollectSwitchState:;
- (unsigned long long)bannerCollectSwitchState;
- (void)setBannerCollectSwitchState:;
- (unsigned long long)innerpushCollectSwitchState;
- (void)setInnerpushCollectSwitchState:;
+ (id)JSONKeyPathsByPropertyKey;
@end
