@interface VeLivePlayerError : NSError
@property (nonatomic) q errorCode;
@property (nonatomic) NSString errorMsg;
- (id)errorMsg;
- (id)initWithCode:errorMessage:;
- (id)initWithInternalCode:errorMessage:;
- (long long)errorCode;
- (void).cxx_destruct;
@end
