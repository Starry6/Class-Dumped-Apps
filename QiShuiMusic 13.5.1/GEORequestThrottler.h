@interface GEORequestThrottler : NSObject
- (id)init;
- (void)_scheduleTimer:;
- (void).cxx_destruct;
- (void)enqueueTicket:submissionHandler:;
- (void)cancelTicket:;
- (void)submitTickets;
+ (id)sharedThrottler;
@end
