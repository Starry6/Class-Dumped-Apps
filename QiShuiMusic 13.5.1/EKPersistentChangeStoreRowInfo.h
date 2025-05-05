@interface EKPersistentChangeStoreRowInfo : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSInteger consumedSequenceNumber;
- (void).cxx_destruct;
- (void)setClientIdentifier:;
- (id)description;
- (id)clientIdentifier;
- (int)consumedSequenceNumber;
- (void)setConsumedSequenceNumber:;
@end
