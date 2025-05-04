@interface AWECardCellFactory : NSObject
- (void)registerForCollectionView:;
- (id)cellForCollectionView:model:indexPath:context:selectedB:;
+ (id)cellClassArray;
@end
