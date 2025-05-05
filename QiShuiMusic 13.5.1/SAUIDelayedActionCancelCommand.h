@interface SAUIDelayedActionCancelCommand : SADomainCommand
@property (nonatomic) NSString delayedActionAceId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)delayedActionAceId;
- (void)setDelayedActionAceId:;
+ (id)delayedActionCancelCommand;
+ (id)delayedActionCancelCommandWithDictionary:context:;
@end
