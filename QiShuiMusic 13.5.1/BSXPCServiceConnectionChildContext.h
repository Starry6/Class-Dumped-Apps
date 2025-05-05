@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext
- (BOOL)isServer;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)endpointDescription;
- (BOOL)isNonLaunching;
- (void).cxx_destruct;
- (BOOL)isClient;
- (BOOL)isEqual:;
- (BOOL)isChild;
@end
