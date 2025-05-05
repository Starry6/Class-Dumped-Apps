@interface SYBacklinkIndicatorService : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) <SYBacklinkIndicatorServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)listener;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)_listenerEndpoint;
- (void)setListener:;
- (id)showIndicatorForBacklinkWithDomainIdentifiers:linkIdentifiers:displayID:corner:action:;
- (id)hideIndicator;
+ (id)sharedInstance;
+ (BOOL)_forTesting;
+ (void)set_forTesting:;
@end
