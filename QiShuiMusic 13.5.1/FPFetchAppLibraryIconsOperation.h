@interface FPFetchAppLibraryIconsOperation : FPOperation
@property (nonatomic) <FPOperationProgressDelegate> delegate;
- (void)setDelegate:;
- (void)main;
- (id)delegate;
- (void).cxx_destruct;
- (void)operationDidProgressWithInfo:error:completionHandler:;
- (id)initWithAppLibraryItems:desiredSize:screenScale:;
@end
