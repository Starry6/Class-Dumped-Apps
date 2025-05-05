@interface DACheckSubscribedCalendarIsJunkContext : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) q junkStatus;
- (id)urlString;
- (long long)junkStatus;
- (void)setJunkStatus:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)completionBlock;
- (id)queue;
- (void)finishedWithError:;
- (id)initWithURLString:completionBlock:;
@end
