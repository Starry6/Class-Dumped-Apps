@interface QLListCellDataGenerationOperation : QLAsynchronousOperation
@property (nonatomic) Q index;
@property (nonatomic) QLListCell cell;
@property (nonatomic) QLItem item;
@property (nonatomic) <QLListCellDataGenerationOperationDelegate> delegate;
- (id)item;
- (void)setDelegate:;
- (unsigned long long)index;
- (void)setItem:;
- (void)main;
- (id)delegate;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
- (void)_finishIfNeeded;
- (id)initWithListCell:index:item:delegate:;
- (void)_didGenerateThumbnail:;
- (void)_didDetermineFileSize:fileTypeString:;
@end
