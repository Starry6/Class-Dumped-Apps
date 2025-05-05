@interface GEORequestCounterTicketBase : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)_incrementForApp:startTime:endTime:requestType:result:xmitBytes:recvBytes:usedInterfaces:;
- (void).cxx_destruct;
- (id)description;
- (id)createSubtask:;
- (void)startingRequestWithTask:;
- (void)requestCompletedWithResult:;
- (void)requestCompletedWithError:;
- (void)_subTask:completed:started:finished:xmitBytes:recvBytes:usedInterfaces:;
+ (id)requestCounterTicketForType:appId:;
+ (id)_requestCounterTicketForType:appId:withParent:logNetworkActivityOnly:;
@end
