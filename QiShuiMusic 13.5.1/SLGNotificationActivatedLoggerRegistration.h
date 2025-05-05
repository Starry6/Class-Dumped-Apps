@interface SLGNotificationActivatedLoggerRegistration : NSObject
@property (nonatomic) NSInteger beginToken;
@property (nonatomic) NSInteger endToken;
- (int)endToken;
- (void)setEndToken:;
- (int)beginToken;
- (void)setBeginToken:;
+ (id)registrationWithBeginToken:endToken:;
@end
