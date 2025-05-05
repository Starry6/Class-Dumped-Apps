@interface SAAppSubscriptions : SADomainObject
@property (nonatomic) NSArray activeSubscriptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)activeSubscriptions;
- (void)setActiveSubscriptions:;
+ (id)appSubscriptions;
+ (id)appSubscriptionsWithDictionary:context:;
@end
