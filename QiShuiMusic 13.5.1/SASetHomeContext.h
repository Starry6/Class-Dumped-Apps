@interface SASetHomeContext : SABaseCommand
@property (nonatomic) NSArray currentHomes;
@property (nonatomic) NSArray entities;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)currentHomes;
- (id)entities;
- (BOOL)requiresResponse;
- (void)setEntities:;
- (id)encodedClassName;
- (void)setCurrentHomes:;
@end
