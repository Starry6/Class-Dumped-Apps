@interface UICollectionViewPlaceholder : NSObject
@property (nonatomic) NSIndexPath insertionIndexPath;
@property (nonatomic) NSString cellReuseIdentifier;
@property (nonatomic) @? cellUpdateHandler;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)cellUpdateHandler;
- (void)setCellUpdateHandler:;
- (id)initWithInsertionIndexPath:reuseIdentifier:;
- (id)insertionIndexPath;
- (void)setInsertionIndexPath:;
- (id)cellReuseIdentifier;
- (void)setCellReuseIdentifier:;
@end
