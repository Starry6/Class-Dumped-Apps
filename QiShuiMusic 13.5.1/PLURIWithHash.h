@interface PLURIWithHash : NSObject
@property (nonatomic) NSObject<OS_xpc_object> uri;
@property (nonatomic) Q uriHash;
- (id)uri;
- (id)init;
- (void).cxx_destruct;
- (void)setUri:;
- (id)initWithXPCURI:;
- (unsigned long long)uriHash;
- (void)setUriHash:;
@end
