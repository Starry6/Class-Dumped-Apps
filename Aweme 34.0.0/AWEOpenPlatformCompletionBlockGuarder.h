@interface AWEOpenPlatformCompletionBlockGuarder : NSObject
@property (nonatomic) NSString message;
@property (nonatomic) q invocationCount;
- (void)setInvocationCount:;
- (void)dealloc;
- (id)message;
- (void)invoke;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)initWithMessage:;
- (long long)invocationCount;
@end
