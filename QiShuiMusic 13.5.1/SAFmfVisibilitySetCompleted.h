@interface SAFmfVisibilitySetCompleted : SADomainCommand
@property (nonatomic) NSURL searchContext;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSearchContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)searchContext;
+ (id)visibilitySetCompleted;
+ (id)visibilitySetCompletedWithDictionary:context:;
@end
