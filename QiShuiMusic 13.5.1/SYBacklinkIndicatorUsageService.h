@interface SYBacklinkIndicatorUsageService : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setListener:;
- (id)didActivateBacklinkItemWithIdentifier:;
- (id)didDismissBacklinkItemWithIdentifier:;
+ (id)sharedInstance;
+ (id)_listenerEndpoint;
+ (id)_testingDelegate;
+ (void)beginObservingUsage;
+ (void)set_testingDelegate:;
@end
