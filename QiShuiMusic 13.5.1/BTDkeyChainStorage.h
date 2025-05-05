@interface BTDkeyChainStorage : NSObject
+ (BOOL)setData:key:;
+ (BOOL)setObject:key:;
+ (BOOL)removeValueForKey:;
+ (id)objectForKey:;
@end
