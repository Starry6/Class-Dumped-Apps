@interface MPConcreteMediaItemCollection : MPMediaItemCollection
@property (nonatomic) MPConcreteMediaEntityPropertiesCache cachedPropertyValues;
- (void)dealloc;
- (id)mediaLibrary;
- (void)_enumerateItemPersistentIDsUsingBlock:;
- (id)items;
- (id)representativeItem;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)valueForProperty:;
- (long long)groupingType;
- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)setValue:forProperty:;
- (unsigned long long)persistentID;
- (id)initWithMultiverseIdentifier:library:;
- (id)valuesForProperties:;
- (void)enumerateValuesForProperties:usingBlock:;
- (id)itemsQuery;
- (void)setValue:forProperty:withCompletionBlock:;
- (id)cachedPropertyValues;
- (void)invalidateCachedProperties;
- (id)_initWithIdentifier:valuesForProperties:itemsQuery:grouping:representativeItemIdentifier:propertiesCache:;
- (id)initWithIdentifier:valuesForProperties:itemsQuery:grouping:representativeItemIdentifier:;
- (id)initWithIdentifier:itemsQuery:grouping:;
+ (BOOL)supportsSecureCoding;
+ (id)createUncachedMediaItemCollectionWithIdentifier:valuesForProperties:itemsQuery:grouping:representativeItemIdentifier:;
@end
