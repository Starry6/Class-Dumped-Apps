@interface AWEFeedCacheProcessPipeline : NSObject
@property (nonatomic) q status;
@property (nonatomic) q cursor;
@property (nonatomic) NSArray processors;
@property (nonatomic) @? completedListener;
@property (nonatomic) @? failureListener;
- (void)setProcessors:;
- (id)syncProcess:;
- (id)initWithProcessors:completedListener:failureListener:;
- (id)completedListener;
- (id)failureListener;
- (void)failure:;
- (void)setCompletedListener:;
- (void)setFailureListener:;
- (long long)cursor;
- (void)completed;
- (void)setStatus:;
- (void)process:;
- (void)setCursor:;
- (void).cxx_destruct;
- (long long)status;
- (id)processors;
@end
