@interface ITIdleTimerStateServer : NSObject
@property (nonatomic) <ITIdleTimerStateServerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_addConnection:;
- (void)_removeConnection:;
- (void)listener:didReceiveConnection:withContext:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)clientConfiguration:handleIdleEvent:;
- (BOOL)isIdleTimerServiceAvailableWithError:;
- (void)addIdleTimerServiceConfiguration:forReason:error:;
- (void)removeIdleTimerServiceConfiguration:forReason:error:;
- (id)initWithCalloutQueue:delegate:;
- (BOOL)_hasIdleTimerServicesEntitlementForProcess:missingEntitlementError:;
@end
