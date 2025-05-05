@interface HIDVirtualEventService : NSObject
@property (nonatomic) HIDEventSystemClient client;
@property (nonatomic) HIDServiceClient serviceClient;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q serviceID;
@property (nonatomic) <HIDVirtualEventServiceDelegate> delegate;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (unsigned long long)serviceID;
- (void)setServiceClient:;
- (void)setDelegate:;
- (void)setClient:;
- (void)setDispatchQueue:;
- (void)setCancelHandler:;
- (id)serviceClient;
- (id)delegate;
- (id)client;
- (void).cxx_destruct;
- (id)description;
- (void)setQueue:;
- (id)queue;
- (BOOL)dispatchEvent:;
- (void)activate;
@end
