@interface SADistance : AceObject
@property (nonatomic) NSString unit;
@property (nonatomic) NSNumber value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setUnit:;
- (void)setValue:;
- (id)encodedClassName;
- (id)unit;
- (id)value;
+ (id)distance;
+ (id)distanceWithDictionary:context:;
@end
