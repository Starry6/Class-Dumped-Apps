@interface MSGetMailIntentResponse : INIntentResponse
@property (nonatomic) q code;
@property (nonatomic) NSArray mails;
- (long long)code;
- (void)setCode:;
- (id)initWithCode:userActivity:;
@end
