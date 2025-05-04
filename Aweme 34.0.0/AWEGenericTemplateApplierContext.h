@interface AWEGenericTemplateApplierContext : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) NPGenericTemplateService_OC presetService;
- (id)presetService;
- (void)setPresetService:;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
@end
