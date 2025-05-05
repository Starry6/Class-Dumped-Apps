@interface VCConnection : NSObject
- (id)init;
- (void)dealloc;
- (void)setLinkFlags:;
- (long long)compare:isPrimary:selectionPolicy:;
- (void)setRemoteLinkFlags:;
- (long long)compareInterfacePriority:isPrimary:;
- (long long)compareConnectionTypePriority:selectionPolicy:;
- (long long)compareVpnPriority:selectionPolicy:;
- (long long)compareE2EPriority:selectionPolicy:;
- (long long)compareIpVersionPriority:selectionPolicy:;
- (id)getConnectionSelectionPriorities;
@end
