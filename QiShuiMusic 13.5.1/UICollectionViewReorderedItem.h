@interface UICollectionViewReorderedItem : NSObject
@property (nonatomic) UICollectionViewCell cell;
@property (nonatomic) NSIndexPath originalIndexPath;
@property (nonatomic) NSIndexPath targetIndexPath;
@property (nonatomic) NSIndexPath lastCommittedIndexPath;
@property (nonatomic) BOOL isUncommitted;
@property (nonatomic) BOOL pinned;
@property (nonatomic) {CGPoint=dd} pinnedPreviousContentOffset;
@property (nonatomic) @? pinningTest;
- (void)setPinned:;
- (id)targetIndexPath;
- (void)setTargetIndexPath:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)pinned;
- (id)initWithCell:indexPath:;
- (id)expectedCellIndexPath;
- (void)commitTargetIndexPath;
- (BOOL)isNOOP;
- (id)cell;
- (id)originalIndexPath;
- (void)setOriginalIndexPath:;
- (id)lastCommittedIndexPath;
- (BOOL)isUncommitted;
- (id)pinnedPreviousContentOffset;
- (void)setPinnedPreviousContentOffset:;
- (id)pinningTest;
- (void)setPinningTest:;
@end
