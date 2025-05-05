@interface AFSiriTaskmaster : NSObject
@property (nonatomic) <AFSiriTaskmasterDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)description;
- (void)handleFailureOfRequest:error:atTime:;
- (void)handleSiriTaskUsageResult:fromRequest:;
- (void)handleSiriRequest:deliveryHandler:completionHandler:;
- (id)initWithTaskDeliverer:;
- (void)_handleFailureOfRequest:error:atTime:;
+ (id)taskmasterForUIApplicationWithBundleIdentifier:;
+ (id)taskmasterForMachServiceWithName:;
+ (id)taskmasterForMachServiceForAppWithBundleIdentifier:;
@end
