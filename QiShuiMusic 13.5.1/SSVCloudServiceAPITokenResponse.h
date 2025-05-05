@interface SSVCloudServiceAPITokenResponse : NSObject
@property (nonatomic) NSString apiToken;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)apiToken;
- (id)initWithToken:error:;
- (void)setApiToken:;
@end
