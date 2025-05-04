@interface AWEWaterFallCollectionItemDisplayManager : NSObject
@property (nonatomic) NSSet fullDisplayItemList;
@property (nonatomic) <AWEWaterFallCollectionItemDisplayProtocol> delegate;
- (id)fullDisplayItemList;
- (void)setFullDisplayItemList:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)setDelegate:;
- (void)collectionViewDidScroll:;
@end
