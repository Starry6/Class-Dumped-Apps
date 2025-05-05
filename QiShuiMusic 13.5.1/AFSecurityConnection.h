@interface AFSecurityConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithInstanceContext:;
- (id)_connection;
- (void)_invalidateConnection;
- (id)init;
- (void)dealloc;
- (id)processDataMap:usingProcedure:completion:;
- (id)setKeychainValue:forKey:accountIdentifier:completion:;
- (void)_dispatchCallbackForProcessedData:error:completion:;
- (id)processData:usingProcedure:completion:;
- (void)_connectionInterrupted;
- (id)setInternalAuthSessionToken:completion:;
- (void)_dispatchCallbackForProcessedDataMap:errorMap:completion:;
- (id)internalAuthSessionToken:;
- (void).cxx_destruct;
- (id)internalAuthAppleConnectServiceTicket:;
- (void)_processDataMap:usingProcedure:completion:;
- (id)setInternalAuthAppleConnectServiceTicket:completion:;
- (void)_processData:usingProcedure:completion:;
- (void)invalidate;
- (void)_connectionInvalidated;
@end
