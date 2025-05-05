@interface WebBookmarksXPCListener : NSObject
@property (nonatomic) <WebBookmarksXPCConnectionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)connection:didCloseWithError:;
- (id)delegate;
- (id)initListenerForMachService:;
- (void)setMessageHandlers:;
- (void)setHandler:forMessageNamed:;
- (void).cxx_destruct;
- (void)_handleIncomingConnection:;
@end
