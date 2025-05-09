@interface CRSUIStatusBarStyleService : NSObject
@property (nonatomic) <CRSUIStatusBarStyleServiceDelegate> delegate;
@property (nonatomic) BSServiceConnectionListener listener;
@property (nonatomic) NSObject<OS_dispatch_queue> connectionQueue;
@property (nonatomic) NSHashTable connections;
@property (nonatomic) q interfaceStyle;
@property (nonatomic) q contrast;
@property (nonatomic) BOOL siriPresentation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)interfaceStyle;
- (void)setConnectionQueue:;
- (id)connections;
- (id)connectionQueue;
- (void)listener:didReceiveConnection:withContext:;
- (void)setDelegate:;
- (long long)contrast;
- (id)listener;
- (void)setConnections:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setListener:;
- (void)invalidate;
- (BOOL)isSiriPresentation;
- (id)clientAcquireWithInterfaceStyle:contrast:fenceHandle:animationSettings:;
- (id)clientAcquireForSiriPresentationWithFenceHandle:animationSettings:;
- (id)clientReliquishWithFenceHandle:animationSettings:;
- (void)_connectionQueue_addConnection:;
- (void)_connectionQueue_removeConnection:;
@end
