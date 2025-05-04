@interface AWESearchSeparateRenderManagerBasic : NSObject
@property (nonatomic) AWESearchDynamicPreLayoutManager preLayoutManager;
@property (nonatomic) BOOL isSeparateRenderIndividualOpen;
@property (nonatomic) BOOL isSeparateSSROpen;
@property (nonatomic) NSSet blockList;
@property (nonatomic) NSSet blockChannelList;
@property (nonatomic) NSSet multiTASMBlockList;
@property (nonatomic) NSSet switchToSyncBlockList;
@property (nonatomic) # preprocessClass;
@property (nonatomic) NSString searchScene;
- (id)searchScene;
- (void)setSearchScene:;
- (void)setPreprocessClass:;
- (id)preLayoutManager;
- (void)createLayoutTaskWithArray:completionBlock:;
- (void)setPreLayoutManager:;
- (Class)preprocessClass;
- (id)initWithConfig:preProcessClass:;
- (id)multiTASMBlockList;
- (id)switchToSyncBlockList;
- (BOOL)modelValidForSeparateRender:bundle:channel:;
- (void)checkBlockListForOptimize:bundle:channel:;
- (BOOL)isSeparateSSROpen;
- (BOOL)isSeparateRenderOpened;
- (BOOL)isSeparateRenderIndividualOpen;
- (id)blockChannelList;
- (void).cxx_destruct;
- (id)blockList;
@end
