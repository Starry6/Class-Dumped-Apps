@interface CSJAdError : NSError
@property (nonatomic) q errorCode;
- (long long)errorCode;
- (void)setErrorCode:;
- (id)initWithCode:userInfo:;
@end
