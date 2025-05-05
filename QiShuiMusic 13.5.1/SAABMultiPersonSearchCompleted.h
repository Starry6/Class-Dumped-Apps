@interface SAABMultiPersonSearchCompleted : SABaseCommand
@property (nonatomic) NSArray personSearchCompleteds;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)personSearchCompleteds;
- (void)setPersonSearchCompleteds:;
+ (id)multiPersonSearchCompleted;
+ (id)multiPersonSearchCompletedWithDictionary:context:;
@end
