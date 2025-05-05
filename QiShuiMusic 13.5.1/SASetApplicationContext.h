@interface SASetApplicationContext : SABaseCommand
@property (nonatomic) NSArray orderedContext;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)orderedContext;
- (void)setOrderedContext:;
+ (id)setApplicationContext;
+ (id)setApplicationContextWithDictionary:context:;
@end
