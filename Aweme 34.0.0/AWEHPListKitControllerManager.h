@interface AWEHPListKitControllerManager : NSObject
@property (nonatomic) NSArray moduleControllerArray;
@property (nonatomic) NSArray moduleModels;
@property (nonatomic) <AWEHPListKitControllerFactoryProtocol> factory;
- (id)moduleControllerArray;
- (id)moduleModels;
- (BOOL)removeItemControllerWithBusinessId:;
- (void)setModuleControllerArray:;
- (void)setModuleModels:;
- (void)p_createModuleControllers:withModuleControllerArray:withModuleModels:withNeedReuse:withModuleContextBlock:withItemContextBlock:withItemCreateCompleteBlock:;
- (id)p_reuseItemController:withModuleType:withItemContextBlock:;
- (id)p_createItemController:withModuleType:withItemContextBlock:withItemCreateCompleteBlock:;
- (id)getItemControllerContextWithBusinessId:;
- (void)loadDataAndCreateController:;
- (void)setFactory:;
- (id)factory;
- (void).cxx_destruct;
- (id)initWithFactory:;
@end
