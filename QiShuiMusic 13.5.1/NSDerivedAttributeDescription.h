@interface NSDerivedAttributeDescription : NSAttributeDescription
@property (nonatomic) NSExpression derivationExpression;
- (void)setRenamingIdentifier:;
- (BOOL)isReadOnly;
- (unsigned long long)_propertyType;
- (BOOL)_isSchemaEqual:;
- (void)setTransient:;
- (id)derivationExpression;
- (void)setReadOnly:;
- (void)dealloc;
- (void)_writeIntoData:propertiesDict:uniquedPropertyNames:uniquedStrings:uniquedData:entitiesSlots:fetchRequests:;
- (void)setDefaultValue:;
- (id)initWithCoder:;
- (void)setDerivationExpression:;
- (void)_createCachesAndOptimizeState;
- (void)encodeWithCoder:;
- (BOOL)isTransient;
- (id)description;
- (void)_versionHash:inStyle:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
