@interface MSSendMailIntentResponse : INIntentResponse
@property (nonatomic) q code;
- (long long)code;
- (void)setCode:;
- (id)initWithCode:userActivity:;
@end
