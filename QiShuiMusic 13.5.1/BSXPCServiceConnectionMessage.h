@interface BSXPCServiceConnectionMessage : BSXPCCoder
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)send;
- (BOOL)sendSynchronously;
- (id)createReply;
- (BOOL)expectsReply;
- (id)initWithMessage:;
- (id)sendSynchronouslyWithError:;
- (void).cxx_destruct;
- (void)invalidate;
@end
