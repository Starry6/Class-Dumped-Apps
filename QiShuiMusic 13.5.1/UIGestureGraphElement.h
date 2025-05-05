@interface UIGestureGraphElement : NSObject
@property (nonatomic) NSString label;
- (BOOL)hasProperties:;
- (void)removePropertyForKey:;
- (void)removeAllProperties;
- (id)initWithLabel:;
- (void)enumeratePropertiesUsingBlock:;
- (void)setProperties:;
- (id)label;
- (void)setProperty:forKey:;
- (id)propertyForKey:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)description;
@end
