@interface AFAudioSessionAssertionConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) AFAssertionContext context;
- (void)dealloc;
- (id)context;
- (id)_xpcConnection;
- (id)uuid;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)relinquishWithContext:options:;
- (void)relinquishWithError:options:;
- (id)initWithInstanceContext:acquisitionContext:relinquishmentHandler:;
- (void)_acquireWithContext:;
- (void)_relinquishWithContext:error:options:;
- (void)_finalizeWithContext:error:;
- (void)handleXPCConnectionInterrupted;
- (void)handleXPCConnectionInvalidated;
- (void)_clearXPCConnection;
@end
