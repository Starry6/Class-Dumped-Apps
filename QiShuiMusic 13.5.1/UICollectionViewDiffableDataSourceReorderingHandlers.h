@interface UICollectionViewDiffableDataSourceReorderingHandlers : NSObject
@property (nonatomic) @? canReorderItemHandler;
@property (nonatomic) @? willReorderHandler;
@property (nonatomic) @? didReorderHandler;
- (void)setCanReorderItemHandler:;
- (id)canReorderItemHandler;
- (void)setWillReorderHandler:;
- (id)willReorderHandler;
- (id)didReorderHandler;
- (void).cxx_destruct;
- (void)setDidReorderHandler:;
- (id)initWithCanReorderItemHandler:willReorderItemHandler:didReorderItemHandler:;
- (id)copyWithZone:;
@end
