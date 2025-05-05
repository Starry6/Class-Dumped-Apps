@interface NWOSCustomEndpoint : NWConcrete_nw_endpoint
- (id)copyDictionary;
- (unsigned long long)getHash;
- (unsigned int)type;
- (void).cxx_destruct;
- (BOOL)isEqualToEndpoint:matchFlags:;
- (id)copyEndpoint;
- (char *)createDescription:;
@end
