@interface UgenError : NSError
@property (nonatomic) Q errorCode;
@property (nonatomic) NSDictionary info;
- (unsigned long long)errorCode;
- (void)setInfo:;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (id)info;
- (id)initWithCode:userInfo:;
@end
