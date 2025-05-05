@interface MRConcreteEndpoint : MRAVEndpoint
@property (nonatomic) NSArray outputDevices;
- (long long)connectionType;
- (BOOL)canModifyGroupMembership;
- (void)setOutputDevices:;
- (BOOL)isProxyGroupPlayer;
- (id)uniqueIdentifier;
- (id)outputDevices;
- (id)designatedGroupLeader;
- (void)setExternalDevice:;
- (void).cxx_destruct;
- (id)externalDevice;
- (id)initWithDesignatedGroupLeader:outputDevices:preferredSuffix:;
- (id)initWithDesignatedGroupLeader:outputDevices:preferredSuffix:connectionType:;
@end
