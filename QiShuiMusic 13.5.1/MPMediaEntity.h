@interface MPMediaEntity : NSObject
@property (nonatomic) MPMediaLibrary mediaLibrary;
@property (nonatomic) MPMediaItem representativeItem;
@property (nonatomic) MIPMultiverseIdentifier multiverseIdentifier;
@property (nonatomic) Q persistentID;
- (id)mediaLibrary;
- (id)representativeItem;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)valueForProperty:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)persistentID;
- (id)initWithMultiverseIdentifier:library:;
- (id)multiverseIdentifier;
- (id)genericModelObjectWithRequestedProperties:;
- (id)valuesForProperties:;
- (void)enumerateValuesForProperties:usingBlock:;
- (void)invalidateCachedProperties;
- (id)cachedValueForProperty:isCached:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)canFilterByProperty:;
@end
