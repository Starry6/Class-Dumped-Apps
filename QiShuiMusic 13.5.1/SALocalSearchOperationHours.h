@interface SALocalSearchOperationHours : AceObject
@property (nonatomic) NSDictionary operationPeriods;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)operationPeriods;
- (void)setOperationPeriods:;
+ (id)operationHours;
+ (id)operationHoursWithDictionary:context:;
@end
