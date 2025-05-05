@interface EDSearchableIndexVerificationData : NSObject
@property (nonatomic) NSString subject;
@property (nonatomic) NSArray toEmailAddresses;
@property (nonatomic) NSString deleted;
@property (nonatomic) NSNumber transactionID;
@property (nonatomic) NSNumber flags;
@property (nonatomic) NSNumber indexedAsEmptySubject;
@property (nonatomic) NSDate dateReceived;
@property (nonatomic) NSDictionary userInfo;
- (id)transactionID;
- (id)deleted;
- (void)setToEmailAddresses:;
- (id)subject;
- (void)setSubject:;
- (id)userInfo;
- (void)setDateReceived:;
- (id)toEmailAddresses;
- (void)setTransactionID:;
- (id)indexedAsEmptySubject;
- (void)setIndexedAsEmptySubject:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (void)setDeleted:;
- (id)dateReceived;
- (void)setFlags:;
- (id)flags;
- (id)copyWithZone:;
@end
