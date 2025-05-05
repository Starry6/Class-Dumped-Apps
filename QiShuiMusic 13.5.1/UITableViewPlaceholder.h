@interface UITableViewPlaceholder : NSObject
@property (nonatomic) NSIndexPath insertionIndexPath;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) double rowHeight;
@property (nonatomic) @? cellUpdateHandler;
- (id)reuseIdentifier;
- (void).cxx_destruct;
- (double)rowHeight;
- (void)setRowHeight:;
- (void)setReuseIdentifier:;
- (id)cellUpdateHandler;
- (void)setCellUpdateHandler:;
- (id)insertionIndexPath;
- (void)setInsertionIndexPath:;
- (id)initWithInsertionIndexPath:reuseIdentifier:rowHeight:;
@end
