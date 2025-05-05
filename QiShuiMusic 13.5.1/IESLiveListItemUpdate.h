@interface IESLiveListItemUpdate : IESLiveListUpdate
@property (nonatomic) NSIndexPath indexPath;
@property (nonatomic) NSIndexPath indexPathNew;
@property (nonatomic) @? itemUpdateBlock;
- (id)itemUpdateBlock;
- (id)indexPathNew;
- (BOOL)isItemUpdate;
- (void)setIndexPathNew:;
- (void)setItemUpdateBlock:;
- (void)setIndexPath:;
- (void).cxx_destruct;
- (id)indexPath;
+ (id)updateWithType:indexPath:newIndexPath:object:;
@end
