@interface AWEShareLandscapeService : AWEShareCommonImpl
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtra:;
- (id)logExtra;
- (id)showLandscapeSharePanelWithModel:viewController:logExtra:;
- (void)configXiguaShareLogExtrainfoWithContext:;
- (void)configShareConfiguratin:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
+ (id)shareTypesForLandscape;
@end
