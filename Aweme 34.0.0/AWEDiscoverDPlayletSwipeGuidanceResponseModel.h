@interface AWEDiscoverDPlayletSwipeGuidanceResponseModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel targetModel;
@property (nonatomic) AWEDiscoverDPlayletSwipeGuidanceResponsePanelConfigModel panelConfig;
@property (nonatomic) AWEDiscoverDPlayletSwipeGuidanceResponsePanelConfigModel subGuideConfig;
@property (nonatomic) NSString targetModelRaw;
@property (nonatomic) NSString toast;
- (id)panelConfig;
- (void)setPanelConfig:;
- (id)targetModel;
- (void)setTargetModel:;
- (id)subGuideConfig;
- (id)targetModelRaw;
- (void)setSubGuideConfig:;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
+ (id)panelConfigJSONTransformer;
+ (id)subGuideConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
