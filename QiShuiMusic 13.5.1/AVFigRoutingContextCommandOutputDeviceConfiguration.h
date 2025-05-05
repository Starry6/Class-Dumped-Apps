@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString devicePassword;
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSData devicePublicKey;
@property (nonatomic) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic) BOOL onlyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic) NSArray peersInHomeGroup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)deviceName;
- (id)deviceID;
- (BOOL)onlyAllowsConnectionsFromPeersInHomeGroup;
- (BOOL)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (id)devicePassword;
- (id)devicePublicKey;
- (id)peersInHomeGroup;
- (id)initWithRoutingContextComandResponse:;
@end
