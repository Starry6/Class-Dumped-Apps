@interface CSJSDFileAttributeHelper : NSObject
+ (BOOL)setExtendedAttribute:value:atPath:traverseLink:overwrite:error:;
+ (id)extendedAttribute:atPath:traverseLink:error:;
+ (id)extendedAttributeNamesAtPath:traverseLink:error:;
+ (BOOL)hasExtendedAttribute:atPath:traverseLink:error:;
+ (BOOL)removeExtendedAttribute:atPath:traverseLink:error:;
@end
