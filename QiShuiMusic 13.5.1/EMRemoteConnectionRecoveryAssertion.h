@interface EMRemoteConnectionRecoveryAssertion : NSObject
@property (nonatomic) <EMRemoteConnectionRecoveryAssertionDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (void)invalidate;
@end
