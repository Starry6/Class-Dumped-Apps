@interface DAESubscriptionCalendarDownloadContext : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <DAESubscribedCalendarDownloadDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)callOutToDelegate:;
- (void)asyncCallOutToDelegate:;
@end
