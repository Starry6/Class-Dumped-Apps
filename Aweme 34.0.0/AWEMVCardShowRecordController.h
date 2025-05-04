@interface AWEMVCardShowRecordController : AWEDCFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)containerCollectionView:willDisplayCell:forItemAtIndexPath:;
- (id)mvPageContext;
- (void)saveDataToStorage;
- (void)saveLatestPlayProgress;
- (void)saveLastShowIds;
- (void)didLeaveMVChannel;
- (void)applicationWillTerminate;
- (void)applicationWillResignActive;
@end
