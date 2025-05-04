@interface AWEPOIAlbumCreationComponent : ACCFeatureComponent
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) <AUCBottomModeAlbumService> bottomModeAlbumService;
@property (nonatomic) <ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) BOOL shouldSelectAsset;
@property (nonatomic) BOOL bComponentDidAppear;
@property (nonatomic) q initialSelectedAssetsCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (id)switchModeService;
- (void)setSwitchModeService:;
- (void)switchModeServiceDidChangeMode:oldMode:;
- (void)albumDidCompleteWithAssets:;
- (void)updateAlbumInputDataIfNeeded:;
- (void)setShouldSelectAsset:;
- (void)setBComponentDidAppear:;
- (void)setInitialSelectedAssetsCount:;
- (id)bottomModeAlbumService;
- (BOOL)bComponentDidAppear;
- (BOOL)shouldSelectAsset;
- (long long)initialSelectedAssetsCount;
- (void)setBottomModeAlbumService:;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
