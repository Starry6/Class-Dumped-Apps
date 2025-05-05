@interface PFUbiquityRemotePeerState : NSManagedObject
@property (nonatomic) NSNumber transactionNumber;
@property (nonatomic) NSString peerID;
@property (nonatomic) NSString storeName;
@property (nonatomic) PFUbiquityPeer peer;
- (id)initWithStoreName:andRemotePeerID:insertIntoManagedObjectContext:;
@end
