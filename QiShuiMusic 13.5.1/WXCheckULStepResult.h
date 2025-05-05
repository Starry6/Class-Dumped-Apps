@interface WXCheckULStepResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSString errorInfo;
@property (nonatomic) NSString suggestion;
- (id)errorInfo;
- (id)initWithCheckResult:errorInfo:suggestion:;
- (void)setErrorInfo:;
- (id)suggestion;
- (void)setSuggestion:;
- (BOOL)success;
- (void)setSuccess:;
- (void).cxx_destruct;
- (id)description;
@end
