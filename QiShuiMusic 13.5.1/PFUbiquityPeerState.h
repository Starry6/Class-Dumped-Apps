@interface PFUbiquityPeerState : NSManagedObject
@property (nonatomic) NSString lastProcessedTransactionLogURL;
@property (nonatomic) NSString storeName;
@property (nonatomic) NSNumber transactionNumber;
@property (nonatomic) PFUbiquityPeer peer;
@property (nonatomic) PFUbiquityStoreMetadata storeMetadata;
- (id)initWithStoreName:insertIntoManagedObjectContext:;
@end
