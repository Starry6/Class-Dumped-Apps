@interface SALocalSearchNamedPeriod : AceObject
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
+ (id)namedPeriod;
+ (id)namedPeriodWithDictionary:context:;
@end
