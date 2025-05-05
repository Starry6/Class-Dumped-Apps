@interface ABSMultiValue : NSObject
@property (nonatomic) I propertyType;
@property (nonatomic) BOOL mutable;
@property (nonatomic) NSMutableArray values;
- (id)values;
- (unsigned int)propertyType;
- (id)mutableCopy;
- (unsigned long long)_cfTypeID;
- (void).cxx_destruct;
- (id)allValues;
- (BOOL)removeValueAtIndex:;
- (int)identifierAtIndex:;
- (id)labelAtIndex:;
- (BOOL)mutable;
- (id)initWithPropertyType:mutable:values:;
- (id)copyValueAtIndex:;
- (unsigned long long)indexForIdentifier:;
- (unsigned long long)indexOfValue:;
- (int)nextLegacyIdentifier;
- (BOOL)addValue:label:outIdentifier:;
- (BOOL)insertValue:label:atIndex:outIdentifier:;
- (BOOL)replaceValue:atIndex:;
- (BOOL)replaceLabel:atIndex:;
@end
