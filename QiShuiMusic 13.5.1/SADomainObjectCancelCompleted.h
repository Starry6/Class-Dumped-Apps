@interface SADomainObjectCancelCompleted : SABaseCommand
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)domainObjectCancelCompleted;
+ (id)domainObjectCancelCompletedWithDictionary:context:;
@end
