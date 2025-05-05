@interface SAEntryPoint : AceObject
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSNumber longitude;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)latitude;
- (void)setLatitude:;
- (id)encodedClassName;
- (void)setLongitude:;
- (id)longitude;
+ (id)entryPoint;
+ (id)entryPointWithDictionary:context:;
@end
