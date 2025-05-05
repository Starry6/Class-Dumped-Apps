@interface CJPayParamsCacheManager : NSObject
@property (nonatomic) NSMutableDictionary paramsCacheDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramsCacheDict;
- (id)i_getParamsFromCache:;
- (BOOL)i_setParams:key:;
- (void)setParamsCacheDict:;
- (id)init;
- (void).cxx_destruct;
+ (void)registerComponents;
+ (id)defaultService;
@end
