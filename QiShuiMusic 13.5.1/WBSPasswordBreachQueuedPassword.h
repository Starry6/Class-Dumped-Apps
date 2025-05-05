@interface WBSPasswordBreachQueuedPassword : NSObject
@property (nonatomic) NSArray persistentIdentifiers;
@property (nonatomic) WBSPair topBucketIdentiferAndHash;
@property (nonatomic) Q remainingHashCount;
@property (nonatomic) NSData highFrequencyEncodedPasswordData;
@property (nonatomic) NSUUID uuid;
- (id)uuid;
- (void).cxx_destruct;
- (id)description;
- (id)initFakePasswordWithContext:;
- (id)initWithCredentials:context:;
- (void)removeTopBucketIdentifierAndHash;
- (void)pushBucketIdentifiersAndHashesFromQueuedPassword:;
- (id)topBucketIdentiferAndHash;
- (unsigned long long)remainingHashCount;
- (id)highFrequencyEncodedPasswordData;
- (id)persistentIdentifiers;
@end
