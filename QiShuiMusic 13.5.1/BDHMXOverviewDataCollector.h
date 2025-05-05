@interface BDHMXOverviewDataCollector : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> operationQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getBidInfo:key:;
- (void)onEventCreated:;
- (id)getFirstCharacters:string:;
- (id)getFormatURL:;
- (void)onEventTerminated:;
- (void)onEventUnSampled:;
- (void)onEventUploaded:;
- (void)reportToTea:stage:;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)setOperationQueue:;
+ (id)shared;
@end
