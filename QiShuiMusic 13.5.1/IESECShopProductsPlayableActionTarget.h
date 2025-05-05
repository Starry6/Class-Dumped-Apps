@interface IESECShopProductsPlayableActionTarget : NSObject
@property (nonatomic) IESECShopProductsPlayableManager playableManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playableManager;
- (id)activatedMediaControl;
- (id)cellAtIndexPath:;
- (id)initWithHybridContext:;
- (id)playableListCollectionView;
- (BOOL)playableListShouldPlayAtIndexPath:task:;
- (BOOL)playableListShouldStopPlayableTask:;
- (void)playableManager:handlePlayableTask:;
- (void)playableManager:playableTaskDidEnd:;
- (id)productAtIndexPath:;
- (void)skipCurrentPlayableTask;
- (id)slideshowContainerAtIndexPath:;
- (void)slideshowContainerNeedsUpdate;
- (void)updateVisibleArea;
- (void).cxx_destruct;
@end
