@interface ARControlListener : NSObject
@property (nonatomic) <ARControlListenerDelegate> delegate;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithDelegate:anonymousListenerEnabled:;
@end
