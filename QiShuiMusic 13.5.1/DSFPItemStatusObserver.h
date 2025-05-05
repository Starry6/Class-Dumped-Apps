@interface DSFPItemStatusObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopObserving;
- (void)resetError;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dataForCollectionShouldBeReloaded:;
- (void)collection:didEncounterError:;
- (void)collection:didUpdateObservedItem:;
- (void)collection:didUpdateItems:replaceItemsByFormerID:deleteItemsWithIDs:;
- (void)startObserving:forParent:withQueue:;
- (void)updateFPItems:;
- (id)fpItems;
- (void)updateNodesFPItemsFromCollection:;
- (id)fpError;
@end
