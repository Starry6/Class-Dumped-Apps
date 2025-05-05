@interface CNAPITriageLogger : NSObject
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)request:encounteredError:;
- (id)log;
- (void)request:containsContact:;
- (void)didReturnAllResultsForContactFetchRequest:;
- (void)request:spentTimeInClientCode:;
- (void)willExecuteFetchRequest:;
- (void).cxx_destruct;
- (void)didExecuteFetchRequest:duration:;
- (void)clientStoppedEnumerationForRequest:;
- (void)request:willReturnAnchor:;
- (void)request:failedWithError:;
+ (id)os_log;
+ (void)setThreadEntryPoint:;
+ (id)threadEntryPoint;
@end
