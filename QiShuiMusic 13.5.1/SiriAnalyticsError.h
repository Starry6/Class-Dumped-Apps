@interface SiriAnalyticsError : NSError
@property (nonatomic) Q errorType;
@property (nonatomic) NSString message;
- (id)init;
- (id)message;
- (void).cxx_destruct;
- (id)initWithErrorType:message:;
- (unsigned long long)errorType;
@end
