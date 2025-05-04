@interface AWEECOMIMDynamicCardUtilStatus : NSObject
@property (nonatomic) BOOL didFetchJS;
@property (nonatomic) BOOL didExecuteJS;
@property (nonatomic) BOOL isFetchingJS;
@property (nonatomic) NSMutableArray fetchJSPendingCompletionBlocks;
- (void)setFetchJSPendingCompletionBlocks:;
- (BOOL)didFetchJS;
- (void)setDidFetchJS:;
- (BOOL)didExecuteJS;
- (void)setDidExecuteJS:;
- (BOOL)isFetchingJS;
- (void)setIsFetchingJS:;
- (id)fetchJSPendingCompletionBlocks;
- (id)init;
- (void).cxx_destruct;
@end
