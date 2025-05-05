@interface IMCallMonitor : NSObject
@property (nonatomic) BOOL isOnCall;
@property (nonatomic) BOOL isOnTelephonyCall;
@property (nonatomic) NSDate dateLastCallEnded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isOnCall;
- (id)dateLastCallEnded;
- (void).cxx_destruct;
- (void)callObserver:callChanged:;
- (BOOL)isOnTelephonyCall;
+ (id)sharedInstance;
@end
