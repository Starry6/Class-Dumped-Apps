@interface VSJSAppError : VSJSObject
@property (nonatomic) Q code;
@property (nonatomic) NSString message;
- (void)setMessage:;
- (unsigned long long)code;
- (id)message;
- (void).cxx_destruct;
- (void)setCode:;
@end
