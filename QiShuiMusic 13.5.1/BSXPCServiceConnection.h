@interface BSXPCServiceConnection : NSObject
@property (nonatomic) BOOL _invalidated;
@property (nonatomic) BOOL _clientInvalidated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_isInvalidated;
- (id)init;
- (void)dealloc;
- (void)_invalidateChildConnection:;
- (BOOL)_isClientInvalidated;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
@end
