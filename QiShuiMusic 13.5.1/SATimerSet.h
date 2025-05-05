@interface SATimerSet : SADomainCommand
@property (nonatomic) SATimerObject timer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setTimer:;
- (id)encodedClassName;
- (id)timer;
- (BOOL)mutatingCommand;
+ (id)set;
+ (id)setWithDictionary:context:;
@end
