@interface NWOSURLEndpoint : NWConcrete_nw_endpoint
- (id)copyDictionary;
- (id)hostname;
- (void)dealloc;
- (unsigned short)port;
- (unsigned long long)getHash;
- (id)domainForPolicy;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:matchFlags:;
- (id)copyEndpoint;
- (char *)createDescription:;
@end
