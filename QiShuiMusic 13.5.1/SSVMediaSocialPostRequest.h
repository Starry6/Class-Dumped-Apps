@interface SSVMediaSocialPostRequest : SSRequest
@property (nonatomic) SSVMediaSocialPostDescription postDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:;
- (void).cxx_destruct;
- (id)initWithPostDescription:;
- (id)postDescription;
@end
