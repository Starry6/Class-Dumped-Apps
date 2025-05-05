@interface ENAsyncReducerState : NSObject
@property (nonatomic) NSArray visitedItems;
@property (nonatomic) NSArray pendingItems;
@property (nonatomic) @ currentItem;
@property (nonatomic) CUTResult currentResult;
@property (nonatomic) @? cancelBlock;
@property (nonatomic) @? continueBlock;
@property (nonatomic) @? stopBlock;
- (void)setCancelBlock:;
- (void)setCurrentItem:;
- (void)setStopBlock:;
- (id)currentItem;
- (void)cancelWithError:;
- (id)cancelBlock;
- (void).cxx_destruct;
- (id)stopBlock;
- (id)currentResult;
- (void)continueWithResult:;
- (void)stopWithResult:;
- (id)visitedItems;
- (void)setVisitedItems:;
- (id)pendingItems;
- (void)setPendingItems:;
- (void)setCurrentResult:;
- (id)continueBlock;
- (void)setContinueBlock:;
@end
