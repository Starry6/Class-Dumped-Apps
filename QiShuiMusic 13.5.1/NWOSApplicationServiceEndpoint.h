@interface NWOSApplicationServiceEndpoint : NWConcrete_nw_endpoint
- (id)copyDictionary;
- (void)dealloc;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:matchFlags:;
- (id)copyEndpoint;
- (char *)createDescription:;
@end
