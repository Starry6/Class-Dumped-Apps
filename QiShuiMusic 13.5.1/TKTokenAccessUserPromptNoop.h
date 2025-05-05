@interface TKTokenAccessUserPromptNoop : NSObject
@property (nonatomic) q preflightStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)preflightStatus;
- (long long)promptUserToEvaluateRequest:error:;
- (id)initWithPreflightStatus:;
- (void)setPreflightStatus:;
@end
