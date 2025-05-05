@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation
@property (nonatomic) PCSCKKSItemModifyContext context;
- (id)context;
- (void)start;
- (void).cxx_destruct;
- (void)setContext:;
- (id)initWithItemModifyContext:;
- (void)fetchComplete:point:error:;
- (void)fetchCurrentItem:viewhint:complete:;
- (void)fetchPersistentRef:;
@end
