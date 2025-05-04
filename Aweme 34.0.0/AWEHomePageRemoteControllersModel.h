@interface AWEHomePageRemoteControllersModel : NSObject
@property (nonatomic) AWEHomePageRemoteModel remoteModel;
@property (nonatomic) NSArray moduleControllerArray;
@property (nonatomic) NSArray originModuleControllerArray;
- (id)moduleControllerArray;
- (void)setModuleControllerArray:;
- (id)consumedBusinessIDs;
- (BOOL)askAllControllersIfPanelCanShow;
- (id)remoteModel;
- (void)setRemoteModel:;
- (id)originModuleControllerArray;
- (void)setOriginModuleControllerArray:;
- (void).cxx_destruct;
@end
