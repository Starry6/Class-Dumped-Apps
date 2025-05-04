@interface AWEMemoriesPlayerServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createMemoriesPlayerModelWithAwemeModel:;
- (id)createMemoriesPlayerModelWithPHAsset:;
- (id)createMemoriesPlayerDataController;
- (id)createMemoriesPlayerContainerViewControllerWithDataController:;
- (id)createMemoriesPlayerConfigManager;
- (id)createMemoriesPlayerControlManager;
@end
