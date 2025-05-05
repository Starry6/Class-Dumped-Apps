@interface BDTGCSRResult : NSObject
@property (nonatomic) NSString csr;
@property (nonatomic) NSError error;
@property (nonatomic) NSInteger attemptCount;
- (int)attemptCount;
- (void)setError:;
- (void)setAttemptCount:;
- (id)error;
- (void).cxx_destruct;
- (id)csr;
- (void)setCsr:;
@end
