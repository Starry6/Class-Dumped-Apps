@interface AWEIMStrangerMainSection : NSObject
@property (nonatomic) NSMutableArray viewModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapCellClassToViewModel;
- (id)awe_collectionView:layout:sizeForItemAtIndexPath:;
- (double)awe_collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)awe_collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)init;
- (void).cxx_destruct;
- (void)setViewModels:;
- (id)viewModels;
@end
