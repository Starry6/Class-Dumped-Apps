@interface TKTokenConnection : NSObject
@property (nonatomic) TKToken token;
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) NSMapTable sessions;
@property (nonatomic) @ initialKeepAlive;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)token;
- (id)sessions;
- (id)initWithToken:;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initialKeepAlive;
- (void)setInitialKeepAlive:;
@end
