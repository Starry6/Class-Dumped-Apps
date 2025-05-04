@interface AWEVideoUniformEffectViewControllerConfig : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) Q scene;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
@end
