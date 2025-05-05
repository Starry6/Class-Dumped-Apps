@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject
@property (nonatomic) ^{__CFDictionary=} routingContextCommandPayload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDeviceName:;
- (void)dealloc;
- (void)setDevicePassword:;
- (void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:;
- (void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
- (void)addPeerToHomeGroup:;
- (void)removePeerWithIDFromHomeGroup:;
- (id)routingContextCommandPayload;
@end
