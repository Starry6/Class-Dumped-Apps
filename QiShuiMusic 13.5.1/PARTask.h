@interface PARTask : NSObject
@property (nonatomic) @? completionBlock;
@property (nonatomic) PARSession session;
@property (nonatomic) Q queryId;
@property (nonatomic) PARRequest request;
- (void)setSession:;
- (void)setCompletionBlock:;
- (id)request;
- (void)resume;
- (void)setQueryId:;
- (id)session;
- (void).cxx_destruct;
- (void)setRequest:;
- (unsigned long long)queryId;
- (id)completionBlock;
@end
