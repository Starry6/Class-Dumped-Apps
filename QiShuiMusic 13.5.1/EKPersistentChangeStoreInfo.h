@interface EKPersistentChangeStoreInfo : NSObject
@property (nonatomic) NSInteger minConsumedSequenceNumber;
@property (nonatomic) NSString minConsumedClientIdentifier;
@property (nonatomic) NSInteger secondMinConsumedSequenceNumber;
- (void).cxx_destruct;
- (id)description;
- (int)minConsumedSequenceNumber;
- (void)setMinConsumedSequenceNumber:;
- (id)minConsumedClientIdentifier;
- (void)setMinConsumedClientIdentifier:;
- (int)secondMinConsumedSequenceNumber;
- (void)setSecondMinConsumedSequenceNumber:;
@end
