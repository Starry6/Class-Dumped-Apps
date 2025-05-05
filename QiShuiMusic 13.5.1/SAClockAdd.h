@interface SAClockAdd : SADomainCommand
@property (nonatomic) SAClockObject clockToAdd;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)clockToAdd;
- (void)setClockToAdd:;
+ (id)add;
+ (id)addWithDictionary:context:;
@end
