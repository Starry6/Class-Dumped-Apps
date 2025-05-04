@interface AWESearchTabTypeMap : NSObject
+ (id)fetchTabStrWithTabNum:;
+ (id)fetchTabTypeWithTabString:;
+ (id)dynamicTabStrCache;
+ (id)dynamicTabNumCache;
+ (id)dynamicTabNameCache;
+ (id)fetchTabNameWithTabStr:;
+ (void)addDynamicTabStrCacheWithStr:andNum:;
+ (void)addDynamicTabNumCacheWithType:andTabStr:;
+ (void)addDynamicTabNameCacheWithStr:andTabStr:;
@end
