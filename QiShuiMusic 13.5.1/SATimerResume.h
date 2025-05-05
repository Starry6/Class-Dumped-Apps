@interface SATimerResume : SADomainCommand
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)resume;
+ (id)resumeWithDictionary:context:;
@end
