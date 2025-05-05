@interface SAUpdateRestrictions : SABaseCommand
@property (nonatomic) NSArray restrictionsToAdd;
@property (nonatomic) NSArray restrictionsToRemove;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)restrictionsToAdd;
- (void)setRestrictionsToAdd:;
- (id)restrictionsToRemove;
- (void)setRestrictionsToRemove:;
+ (id)updateRestrictions;
+ (id)updateRestrictionsWithDictionary:context:;
@end
