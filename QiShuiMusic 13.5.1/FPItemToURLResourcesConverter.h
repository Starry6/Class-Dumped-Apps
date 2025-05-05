@interface FPItemToURLResourcesConverter : NSObject
- (id)initWithItemClass:;
- (void)_cacheImplementedPropertiesForClass:;
- (id)_dictionaryFromItem:requestedKeys:;
- (void)_addMethod:toClass:;
- (void).cxx_destruct;
- (void)_addHelperMethodsToClass:;
+ (id)dictionaryFromItem:requestedKeys:;
@end
