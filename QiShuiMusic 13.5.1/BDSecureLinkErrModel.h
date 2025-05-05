@interface BDSecureLinkErrModel : NSObject
@property (nonatomic) NSDate occurDate;
@property (nonatomic) Q errorType;
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMsg;
- (id)errorMsg;
- (id)occurDate;
- (void)setErrorMsg:;
- (void)setOccurDate:;
- (long long)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (unsigned long long)errorType;
- (void)setErrorType:;
@end
