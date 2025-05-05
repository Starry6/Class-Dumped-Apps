@interface MSNScopedException : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSString exception;
- (id)exception;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setException:;
- (id)initWithConnection:exception:;
@end
