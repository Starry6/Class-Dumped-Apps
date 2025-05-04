@interface AWEBDARifleViewPopupContext : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEOriginalAdModel adModel;
@property (nonatomic) <AWEBDARifleViewConfiguration> config;
@property (nonatomic) <AWEBDARifleViewDelegate> lifecycleDelegate;
@property (nonatomic) <AWEBDARifleViewPopupEventProtocol> popupEventDelegate;
@property (nonatomic) <AWEPlayInteractionPadSplitScreenProtocol> splitController;
- (id)aweme;
- (void)setAweme:;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:;
- (void)setSplitController:;
- (void)setPopupEventDelegate:;
- (id)popupEventDelegate;
- (id)adModel;
- (void)setAdModel:;
- (id)splitController;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
@end
