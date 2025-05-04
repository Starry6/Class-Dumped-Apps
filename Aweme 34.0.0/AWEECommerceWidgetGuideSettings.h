@interface AWEECommerceWidgetGuideSettings : MTLModel
@property (nonatomic) AWEECommerceWidgetGuideWidgetConfig widgetConfig;
@property (nonatomic) AWEECommerceWidgetGuideIconConfig iconConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconConfig;
- (void)setIconConfig:;
- (void).cxx_destruct;
- (void)setWidgetConfig:;
- (id)widgetConfig;
+ (id)widgetConfigJSONTransformer;
+ (id)iconConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
