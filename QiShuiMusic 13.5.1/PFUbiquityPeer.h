@interface PFUbiquityPeer : NSManagedObject
@property (nonatomic) NSString peerKey;
@property (nonatomic) NSString peerCode;
@property (nonatomic) NSSet remoteStates;
@property (nonatomic) NSSet primaryKeyRanges;
@property (nonatomic) NSSet transactionEntries;
@property (nonatomic) NSSet localPeerStates;
@end
