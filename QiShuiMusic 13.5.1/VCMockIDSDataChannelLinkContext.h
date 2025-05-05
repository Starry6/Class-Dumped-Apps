@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext
- (long long)connectionType;
- (id)init;
- (unsigned int)RATType;
- (unsigned int)remoteRATType;
- (BOOL)isVirtualRelayLink;
@end
