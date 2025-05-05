@interface AWEIMStrangerMainSection : NSObject
@property (nonatomic) NSMutableArray viewModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)awe_collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (double)awe_collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (id)awe_collectionView:layout:sizeForItemAtIndexPath:;
- (id)mapCellClassToViewModel;
- (id)init;
- (void).cxx_destruct;
- (id)viewModels;
- (void)setViewModels:;
@end
