@interface SAPropertyOverride : SADomainObject
@property (nonatomic) NSString property;
@property (nonatomic) NSString value;
- (void)setProperty:;
- (id)groupIdentifier;
- (id)property;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
+ (id)propertyOverride;
+ (id)propertyOverrideWithDictionary:context:;
@end
