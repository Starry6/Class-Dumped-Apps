@interface FLEXRuntimeUtility : NSObject
+ (BOOL)pointerIsValidObjcObject:;
+ (id)potentiallyUnwrapBoxedPointer:type:;
+ (unsigned long long)fieldNameOffsetForTypeEncoding:;
+ (id)classHierarchyOfObject:;
+ (id)subclassesOfClassWithName:;
+ (id)safeClassNameForObject:;
+ (id)safeDescriptionForObject:;
+ (id)safeDebugDescriptionForObject:;
+ (id)summaryForObject:;
+ (BOOL)safeObject:isKindOfClass:;
+ (BOOL)safeObject:respondsToSelector:;
+ (BOOL)tryAddPropertyWithName:attributes:toClass:;
+ (id)allPropertyAttributeKeys;
+ (id)prettyArgumentComponentsForMethod:;
+ (id)performSelector:onObject:;
+ (id)performSelector:onObject:withArguments:error:;
+ (id)performSelector:onObject:withArguments:allowForwarding:error:;
+ (BOOL)isTollFreeBridgedValue:forCFType:;
+ (id)editableJSONStringForObject:;
+ (id)objectValueFromEditableJSONString:;
+ (id)valueForNumberWithObjCType:fromInputString:;
+ (void)enumerateTypesInStructEncoding:usingBlock:;
+ (id)attributesForProperty:;
+ (id)appendName:toType:;
+ (id)readableTypeForEncoding:;
+ (id)valueForPrimitivePointer:objCType:;
@end
