@interface GEODataSessionWaiter : NSObject
@property (nonatomic) GEODataSession session;
@property (nonatomic) GEODataSessionTask task;
@property (nonatomic) @? handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSession:;
- (id)init;
- (void)cancel;
- (void)dataSession:didCompleteTask:;
- (id)initWithSession:request:queue:completionHandler:;
- (id)task;
- (void)setHandler:;
- (void)setTask:;
- (id)handler;
- (id)session;
- (void).cxx_destruct;
@end
