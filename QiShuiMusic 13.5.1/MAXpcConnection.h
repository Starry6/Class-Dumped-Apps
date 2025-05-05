@interface MAXpcConnection : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) NSString connectionId;
- (BOOL)notValid;
- (id)connection;
- (void).cxx_destruct;
- (id)connectionId;
- (id)initWithServiceName:;
@end
