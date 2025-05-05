@interface IESForestWorkflowTraceItem : NSObject
@property (nonatomic) NSString step;
@property (nonatomic) NSString message;
@property (nonatomic) q code;
- (id)initWithStep:code:message:;
- (void)setMessage:;
- (id)step;
- (long long)code;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (void)setStep:;
- (void)setCode:;
@end
