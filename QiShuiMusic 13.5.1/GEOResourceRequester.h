@interface GEOResourceRequester : NSObject
- (id)init;
- (void)fetchResources:force:manifestConfiguration:auditToken:queue:handler:;
- (void).cxx_destruct;
- (id)initWithProxy:;
- (void)fetchResources:force:manifestConfiguration:auditToken:signpostID:queue:handler:;
+ (id)sharedRequester;
+ (void)setProxyClass:;
@end
