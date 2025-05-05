@interface SAHAActionRequest : SADomainObject
@property (nonatomic) NSArray actions;
@property (nonatomic) q executionOrder;
@property (nonatomic) SAHAFilter filter;
- (id)filter;
- (void)setFilter:;
- (id)groupIdentifier;
- (void)setActions:;
- (id)actions;
- (id)encodedClassName;
- (long long)executionOrder;
- (void)setExecutionOrder:;
+ (id)actionRequest;
+ (id)actionRequestWithDictionary:context:;
@end
