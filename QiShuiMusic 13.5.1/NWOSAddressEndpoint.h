@interface NWOSAddressEndpoint : NWConcrete_nw_endpoint
- (id)copyDictionary;
- (id)hostname;
- (void)setPriority:;
- (void)dealloc;
- (unsigned short)port;
- (unsigned long long)getHash;
- (void)setEchConfig:;
- (unsigned int)type;
- (void).cxx_destruct;
- (BOOL)isEqualToEndpoint:matchFlags:;
- (id)copyEndpoint;
- (char *)createDescription:;
- (id)echConfig;
- (unsigned short)priority;
@end
