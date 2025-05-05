@interface SLGLogXPCClient : NSObject
@property (nonatomic) <SLGLogClientProtocolDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)_connectWithCompletion:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_handshake;
- (void)didReceiveInitialLogMessageFromDomain:;
- (void)serverDidReset;
- (void)queryServer:errorHandler:;
@end
