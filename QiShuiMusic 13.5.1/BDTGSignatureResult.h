@interface BDTGSignatureResult : NSObject
@property (nonatomic) NSData signature;
@property (nonatomic) NSError error;
@property (nonatomic) NSInteger attemptCount;
- (void)setSignature:;
- (id)signature;
- (int)attemptCount;
- (void)setError:;
- (void)setAttemptCount:;
- (id)error;
- (void).cxx_destruct;
@end
