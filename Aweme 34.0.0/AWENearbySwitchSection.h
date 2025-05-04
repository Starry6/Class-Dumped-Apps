@interface AWENearbySwitchSection : NSObject
@property (nonatomic) q currentFeedType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)currentFeedType;
- (void)setCurrentFeedType:;
- (id)initWithFeedType:;
- (id)sizeForHeader;
- (long long)numberOfItems;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)sizeForItemAtIndexPath:;
@end
