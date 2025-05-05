@interface PFUbiquityTransactionEntry : NSManagedObject
@property (nonatomic) NSNumber transactionTypeNum;
@property (nonatomic) NSString localIDStr;
@property (nonatomic) NSNumber transactionNumber;
@property (nonatomic) NSString globalIDStr;
@property (nonatomic) NSDate transactionDate;
@property (nonatomic) NSString transactionLogFilename;
@property (nonatomic) NSString knowledgeVectorString;
@property (nonatomic) PFUbiquityPeer actingPeer;
@property (nonatomic) PFUbiquityStoreMetadata storeMetadata;
- (id)initAndInsertIntoManagedObjectContext:;
@end
