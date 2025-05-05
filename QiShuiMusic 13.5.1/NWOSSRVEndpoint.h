@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint
- (id)copyDictionary;
- (void)dealloc;
- (unsigned long long)getHash;
- (id)domainForPolicy;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:matchFlags:;
- (id)copyEndpoint;
- (char *)createDescription:;
@end
