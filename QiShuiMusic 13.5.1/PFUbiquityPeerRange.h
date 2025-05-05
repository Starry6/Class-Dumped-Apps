@interface PFUbiquityPeerRange : NSManagedObject
@property (nonatomic) NSNumber peerStart;
@property (nonatomic) NSNumber end;
@property (nonatomic) NSNumber peerEnd;
@property (nonatomic) NSString peerEntityName;
@property (nonatomic) NSNumber start;
@property (nonatomic) PFUbiquityPeer peer;
@property (nonatomic) PFUbiquityStoreMetadata storeMetadata;
@end
