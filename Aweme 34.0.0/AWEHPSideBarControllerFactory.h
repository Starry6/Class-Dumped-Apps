@interface AWEHPSideBarControllerFactory : NSObject
@property (nonatomic) NSMutableDictionary itemControllerConfig;
@property (nonatomic) NSMutableDictionary moduleControllerConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSupportModuleType:;
- (id)createModuleControllerWithModel:withItemControllers:withManager:withContext:;
- (id)createItemControllerWithBusinessType:withContext:extraData:;
- (BOOL)hasSupportItemType:;
- (void)setModuleControllerConfig:;
- (void)setItemControllerConfig:;
- (void)registerModuleController;
- (void)registerItemController;
- (void)registerItemControllerWithConfig:;
- (id)moduleControllerConfig;
- (id)itemControllerConfig;
- (void)registerModuleControllerWithConfig:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
