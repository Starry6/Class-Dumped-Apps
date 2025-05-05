@interface SASetRestrictions : SABaseCommand
@property (nonatomic) NSArray restrictions;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)restrictions;
- (void)setRestrictions:;
+ (id)setRestrictions;
+ (id)setRestrictionsWithDictionary:context:;
@end
