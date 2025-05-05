@interface CUServer : NSObject
@property (nonatomic) @? acceptHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString label;
@property (nonatomic) NSString serviceType;
- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (id)dispatchQueue;
- (id)serviceType;
- (void)setDispatchQueue:;
- (void)setServiceType:;
- (void)setLabel:;
- (id)label;
- (void)setAcceptHandler:;
- (void).cxx_destruct;
- (id)acceptHandler;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)description;
- (void)invalidate;
- (void)activate;
@end
