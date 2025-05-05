@interface AFMachServiceSiriTaskDeliverer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMachServiceName:;
- (void)deliverSiriTask:completionHandler:;
+ (id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:;
@end
