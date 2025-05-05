@interface RxUpdateVisibleCellsContext : NSObject
@property (nonatomic) NSArray indexPaths;
@property (nonatomic) NSArray sizes;
@property (nonatomic) NSIndexSet sectionIndexes;
@property (nonatomic) NSArray attributes;
- (void)didEntryVisibleCellPass;
- (void)didLeaveVisibleCellPass;
- (id)init;
- (void)addPreferredAttributes:;
- (id)indexPaths;
- (id)attributes;
- (id)sizes;
- (id)sectionIndexes;
- (BOOL)hasLeftVisibleCellsPass;
- (void).cxx_destruct;
- (id)description;
- (BOOL)shouldInvalidate;
@end
