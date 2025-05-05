@interface SAObjectSupport : AceObject
@property (nonatomic) NSString aceVersion;
@property (nonatomic) NSString classId;
@property (nonatomic) NSString groupId;
@property (nonatomic) NSArray supportedProperties;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)groupId;
- (void)setAceVersion:;
- (id)encodedClassName;
- (id)supportedProperties;
- (id)aceVersion;
- (void)setGroupId:;
- (id)classId;
- (void)setClassId:;
- (void)setSupportedProperties:;
+ (id)objectSupport;
+ (id)objectSupportWithDictionary:context:;
@end
