@interface SSSoftwareUpdatesRequest : SSRequest
@property (nonatomic) <SSSoftwareUpdatesRequestDelegate> delegate;
@property (nonatomic) SSSoftwareUpdatesContext updateQueueContext;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (BOOL)start;
- (void)startWithCompletionBlock:;
- (id)initWithUpdateQueueContext:;
- (void)startWithUpdatesResponseBlock:;
- (id)updateQueueContext;
@end
