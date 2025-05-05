@interface SSPlayInfoRequest : SSRequest
@property (nonatomic) <SSPlayInfoRequestDelegate> delegate;
@property (nonatomic) SSPlayInfoRequestContext playInfoContext;
@property (nonatomic) SSPlayInfoResponse playInfoResponse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)init;
- (void)dealloc;
- (id)copyXPCEncoding;
- (BOOL)start;
- (void)startWithCompletionBlock:;
- (void)startWithPlayInfoResponseBlock:;
- (id)initWithPlayInfoContext:;
- (id)playInfoContext;
- (id)playInfoResponse;
@end
