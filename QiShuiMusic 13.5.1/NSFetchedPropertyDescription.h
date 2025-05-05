@interface NSFetchedPropertyDescription : NSPropertyDescription
@property (nonatomic) NSFetchRequest fetchRequest;
- (BOOL)isReadOnly;
- (unsigned long long)_propertyType;
- (void)setTransient:;
- (void)setReadOnly:;
- (void)dealloc;
- (void)_writeIntoData:propertiesDict:uniquedPropertyNames:uniquedStrings:uniquedData:entitiesSlots:fetchRequests:;
- (id)initWithCoder:;
- (void)_createCachesAndOptimizeState;
- (void)setFetchRequest:;
- (void)encodeWithCoder:;
- (BOOL)isTransient;
- (id)description;
- (id)fetchRequest;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
