@interface IESLiveComponentStageDynamicFilter : NSObject
@property (nonatomic) <IESLiveBootableModel> roomModel;
@property (nonatomic) NSMutableArray filterArray;
@property (nonatomic) NSMutableDictionary dynamicConfigs;
@property (nonatomic) <IESLiveBootloaderAdapter> bootloaderAdapter;
- (void)setFilterArray:;
- (id)adjustWithLevel:components:;
- (id)bootLevelWithComponentName:;
- (id)bootloaderAdapter;
- (id)configyWithcomponent:;
- (id)dynamicConfigs;
- (id)filterArray;
- (id)localDynamicConfig;
- (void)recordRoomModel:;
- (id)roomModel;
- (void)setBootloaderAdapter:;
- (void)setDynamicConfigs:;
- (void)setRoomModel:;
- (void)setUpConfigs;
- (id)sortLevel:components:;
- (id)init;
- (void).cxx_destruct;
@end
