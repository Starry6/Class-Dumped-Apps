@interface RTIUtilities : NSObject
+ (id)customInfoClassesForType:forClass:;
+ (id)_attributedStringWithoutDefaultAttributes:;
+ (void)unregisterCustomInfoType:forClass:;
+ (id)_filteredAttributedString:validAttributes:;
+ (id)customInfoDictionary;
+ (void)registerCustomInfoClasses:forType:forClass:;
@end
