@interface WiFiP2PSPITransactionRequestor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)endTransaction:completionHandler:;
- (void)handleConnectionEstablishedWithProxy:;
- (void)_removeOpenTransaction:;
- (void).cxx_destruct;
- (void)startConnectionUsingProxy:completionHandler:;
- (void)beginTransaction:completionHandler:;
- (void)endTransaction:;
- (id)remoteObjectInterface;
+ (id)shared;
@end
