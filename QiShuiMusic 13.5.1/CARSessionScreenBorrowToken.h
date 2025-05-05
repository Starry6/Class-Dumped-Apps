@interface CARSessionScreenBorrowToken : NSObject
@property (nonatomic) CARSession session;
@property (nonatomic) NSString client;
@property (nonatomic) NSString reason;
- (void)dealloc;
- (id)reason;
- (id)client;
- (id)session;
- (void).cxx_destruct;
- (id)initWithSession:client:reason:;
- (void)unborrowToken;
@end
