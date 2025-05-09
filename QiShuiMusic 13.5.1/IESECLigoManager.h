@interface IESECLigoManager : NSObject
@property (nonatomic) IESECLigoContext ligoContext;
@property (nonatomic) <IESECLigoLynxService> ligoLynxManager;
@property (nonatomic) NSMutableDictionary componentsManagerDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLigoContext:;
- (id)ligoLynxManager;
- (id)basicTrackParamsWithComponentModel:;
- (void)clearComponentWithLocalRegionName:componentManagerItem:;
- (void)clearLigoComponentsDic;
- (id)componentManagerItemForLocalRegionName:;
- (id)componentsManagerDic;
- (void)createComponentWithModel:localRegionName:componentManagerItem:;
- (void)didPageVisibilityChange:;
- (BOOL)enableRetainComponentWhenUnloadComponent:;
- (id)getLigoComponentWithLocalRegionName:;
- (id)initWithLigoContext:ligoLynxManager:;
- (id)ligoContext;
- (void)loadComponentWithModel:localRegionName:;
- (void)logEventName:params:componentModel:;
- (void)registerLocalRegionName:componentLoadBlock:unloadBlock:updateBlock:;
- (void)setComponentsManagerDic:;
- (void)setLigoLynxManager:;
- (void)trackAndLogForLigoLoadFail:componentModel:;
- (void)trackEventName:params:componentModel:;
- (void)updateComponentWithModel:localRegionName:componentManagerItem:;
- (void)updateLigoContext:;
- (void).cxx_destruct;
@end
