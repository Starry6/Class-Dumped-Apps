@interface WebCache : NSObject
+ (void)setDisabled:;
+ (BOOL)isDisabled;
+ (void)empty;
+ (id)statistics;
+ (id)imageForURL:;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:;
+ (void)clearCachedCredentials;
@end
