@interface AVOutputDeviceAuthorizedPeer : NSObject
@property (nonatomic) NSString peerID;
@property (nonatomic) NSData publicKey;
@property (nonatomic) BOOL hasAdministratorPrivileges;
- (id)init;
- (void)dealloc;
- (id)publicKey;
- (id)peerID;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)initWithID:publicKey:hasAdministratorPrivileges:;
- (BOOL)hasAdministratorPrivileges;
@end
