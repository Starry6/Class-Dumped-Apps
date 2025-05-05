@interface SSAskPermissionActionRequest : SSRequest
@property (nonatomic) NSURL URL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)initWithURL:;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:;
- (id)URL;
@end
