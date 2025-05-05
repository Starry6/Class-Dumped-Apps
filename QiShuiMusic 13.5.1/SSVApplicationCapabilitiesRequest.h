@interface SSVApplicationCapabilitiesRequest : SSRequest
@property (nonatomic) NSString bundleID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:;
- (void).cxx_destruct;
- (id)bundleID;
- (void)setBundleID:;
- (void)startWithCapabilitiesResponseBlock:;
@end
