@interface SATimerDismiss : SADomainCommand
@property (nonatomic) NSArray timerIds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)timerIds;
- (void)setTimerIds:;
+ (id)dismiss;
+ (id)dismissWithDictionary:context:;
@end
