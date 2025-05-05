@interface SSVDownloadQueueRequest : SSRequest
@property (nonatomic) q queueType;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)initWithQueueType:;
- (void)startWithResponseBlock:;
- (long long)queueType;
@end
