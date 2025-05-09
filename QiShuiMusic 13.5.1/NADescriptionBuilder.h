@interface NADescriptionBuilder : NSObject
@property (nonatomic) NSInteger activeComponent;
@property (nonatomic) NSString activeMultilinePrefix;
@property (nonatomic) BOOL useDebugDescription;
- (id)appendFormat:;
- (id)appendString:;
- (id)build;
- (id)initWithObject:;
- (id)appendKeys:;
- (id)appendObject:withName:;
- (void).cxx_destruct;
- (void)tryAppendKey:;
- (id)appendKey:;
- (void)setActiveMultilinePrefix:;
- (id)activeMultilinePrefix;
- (id)appendUnsignedInteger:withName:;
- (id)appendUInt64:withName:;
- (id)appendTimeInterval:withName:decomposeUnits:;
- (void)appendString:withName:skipIfEmpty:;
- (void)appendString:withName:;
- (id)appendPointer:withName:;
- (id)appendObject:withName:skipIfNil:;
- (id)appendInteger:withName:;
- (id)appendDouble:withName:decimalPrecision:;
- (void)appendDictionarySection:withName:skipIfEmpty:;
- (id)appendClass:withName:;
- (id)appendBool:withName:ifEqualTo:;
- (id)appendBool:withName:;
- (void)appendBodySectionWithName:multilinePrefix:block:;
- (void)appendArraySection:withName:skipIfEmpty:;
- (void)appendArraySection:withName:multilinePrefix:skipIfEmpty:objectTransformer:;
- (void)appendArraySection:withName:multilinePrefix:skipIfEmpty:;
- (id)modifyProem:;
- (id)modifyBody:;
- (void)setActiveComponent:;
- (void)appendDictionarySection:withName:multilinePrefix:skipIfEmpty:;
- (id)appendUnsignedInt:withName:;
- (void)appendArraySection:withName:skipIfEmpty:objectTransformer:;
- (id)appendInt:withName:;
- (id)appendInt64:withName:;
- (id)appendSelector:withName:;
- (id)appendCString:withName:;
- (id)appendQueue:withName:;
- (id)appendSuper;
- (id)appendObjectsAndNames:;
- (void)appendDictionarySection:withName:multilinePrefix:skipIfEmpty:objectTransformer:;
- (int)activeComponent;
- (BOOL)useDebugDescription;
- (void)setUseDebugDescription:;
- (id)_activeComponentString;
- (id)appendObjectsAndNames:args:;
+ (id)nameObjectSeparator;
+ (id)descriptionForObject:withObjectsAndNames:;
+ (id)descriptionForObject:;
+ (id)succinctDescriptionForObject:;
+ (id)builderWithObject:;
+ (id)componentSeparator;
@end
