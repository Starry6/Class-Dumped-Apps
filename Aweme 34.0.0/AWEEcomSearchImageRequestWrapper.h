@interface AWEEcomSearchImageRequestWrapper : NSObject
@property (nonatomic) BOOL completionExecuted;
@property (nonatomic) AWEEcomImageSearchRequestContext context;
@property (nonatomic) @? completionBlock;
@property (nonatomic) @? responseBlock;
@property (nonatomic) @? detectionsBlock;
- (BOOL)completionExecuted;
- (void)setCompletionExecuted:;
- (id)detectionsBlock;
- (void)setDetectionsBlock:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)responseBlock;
- (void)setResponseBlock:;
@end
