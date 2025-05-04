@interface AWEECommerceWidgetGuideWidgetConfig : MTLModel
@property (nonatomic) AWEECommerceWidgetGuideShoppingWidget shoppingWidget;
@property (nonatomic) AWEECWidgetPreloadConfig preloadConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preloadConfig;
- (void)setPreloadConfig:;
- (id)shoppingWidget;
- (void)setShoppingWidget:;
- (void).cxx_destruct;
+ (id)shoppingWidgetJSONTransformer;
+ (id)preloadConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
