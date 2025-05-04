@interface AWEECOMIMTIMXLogPlugin : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> logQueue;
@property (nonatomic) NSDateFormatter dateFormatter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logMessage:withLevel:withTag:withFileName:withFuncName:withLine:withInstance:;
- (id)init;
- (void)setDateFormatter:;
- (id)dateFormatter;
- (void).cxx_destruct;
- (void)setLogQueue:;
- (id)logQueue;
+ (id)sharedInstance;
@end
