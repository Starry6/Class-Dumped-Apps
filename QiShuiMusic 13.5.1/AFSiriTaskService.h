@interface AFSiriTaskService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (void)resume;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)initWithMachServiceName:;
+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:;
+ (id)appTaskService;
@end
