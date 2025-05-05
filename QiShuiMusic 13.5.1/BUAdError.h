@interface BUAdError : NSError
@property (nonatomic) q errorCode;
- (long long)errorCode;
- (void)setErrorCode:;
@end
