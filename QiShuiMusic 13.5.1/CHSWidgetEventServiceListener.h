@interface CHSWidgetEventServiceListener : NSObject
@property (nonatomic) <CHSWidgetEventServiceListenerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_addConnection:;
- (void)_removeConnection:;
- (void)listener:didReceiveConnection:withContext:;
- (void)setDelegate:;
- (BOOL)_isConnectingProcessAuthorized:error:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)activate;
- (id)handleOpenEventWithURL:;
- (id)handleOpenEventWithUserActivityData:;
- (id)initWithServiceDomain:delegate:;
@end
