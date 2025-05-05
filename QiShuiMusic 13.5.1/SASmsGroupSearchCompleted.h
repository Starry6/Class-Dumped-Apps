@interface SASmsGroupSearchCompleted : SABaseCommand
@property (nonatomic) NSArray smsGroups;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)smsGroups;
- (void)setSmsGroups:;
+ (id)groupSearchCompleted;
+ (id)groupSearchCompletedWithDictionary:context:;
@end
