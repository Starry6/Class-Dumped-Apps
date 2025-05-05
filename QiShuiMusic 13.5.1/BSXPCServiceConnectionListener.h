@interface BSXPCServiceConnectionListener : NSObject
@property (nonatomic) BOOL _invalidated;
@property (nonatomic) BOOL _clientInvalidated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_isInvalidated;
- (id)init;
- (void)dealloc;
- (void)setServiceQuality:;
- (void)setConnectionHandler:;
- (void)_invalidateChildConnection:;
- (void)setErrorHandler:;
- (BOOL)_isClientInvalidated;
- (void).cxx_destruct;
- (void)setEndpointDescription:;
- (void)invalidate;
@end
