@interface SAClockDelete : SADomainCommand
@property (nonatomic) NSArray clockIds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)clockIds;
- (void)setClockIds:;
@end
