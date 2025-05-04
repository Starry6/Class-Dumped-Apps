@interface AWEMVChannelFirstRefreshCacheController : AWEDCFeedBaseController
- (void)enterContainerWithModel:;
- (void)exitContainerWithModel:;
- (void)containerBeforeViewDidLoad;
- (void)containerViewDidDisappear:;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (void)saveFirstRenderCacheData:;
- (void)preReadDiskCached;
- (id)buildTheLatestARoundData;
- (id)modelsForSameKindSectionViewModel:count:;
- (id)lastRoundModelsForOneLargeEightSmallLayout:;
- (id)deprecated_lastRoundModelsForOneLargeEightSmallLayout:;
- (void)applicationWillResignActive;
@end
