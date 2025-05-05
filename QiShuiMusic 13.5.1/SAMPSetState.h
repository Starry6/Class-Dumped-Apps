@interface SAMPSetState : SADomainCommand
@property (nonatomic) NSInteger state;
- (id)groupIdentifier;
- (void)setState:;
- (BOOL)requiresResponse;
- (int)state;
- (id)encodedClassName;
+ (id)setState;
+ (id)setStateWithDictionary:context:;
@end
