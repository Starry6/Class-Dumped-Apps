@interface MLParameterUtils : NSObject
+ (id)objectForKey:class:dictionary:;
+ (id)deScopeParameters:byDeletingPrefixingScope:;
+ (id)stringForKey:inDictionary:;
+ (id)numberForKey:inDictionary:;
+ (void)appendParameterDescriptions:toModelDescription:;
@end
