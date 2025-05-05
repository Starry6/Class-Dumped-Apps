@interface WFSmartPromptIntentResponse : INIntentResponse
@property (nonatomic) q code;
@property (nonatomic) NSNumber authorizationResult;
- (long long)code;
- (void)setCode:;
- (id)initWithCode:userActivity:;
@end
