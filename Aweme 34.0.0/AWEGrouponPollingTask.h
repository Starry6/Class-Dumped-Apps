@interface AWEGrouponPollingTask : NSObject
@property (nonatomic) double interval;
@property (nonatomic) NSString reqPath;
@property (nonatomic) NSDictionary reqParams;
@property (nonatomic) q pollingLimit;
@property (nonatomic) q count;
@property (nonatomic) Q status;
- (void)pollWithInterval:;
- (long long)pollingLimit;
- (void)requestWithCompletion:;
- (void)setPollingLimit:;
- (id)reqParams;
- (id)reqPath;
- (id)initWithInterval:reqPath:reqParams:limit:;
- (void)excecute;
- (void)setReqPath:;
- (void)setReqParams:;
- (double)interval;
- (void)setCount:;
- (void)setStatus:;
- (void)setInterval:;
- (long long)count;
- (void)cancel;
- (void).cxx_destruct;
- (unsigned long long)status;
@end
