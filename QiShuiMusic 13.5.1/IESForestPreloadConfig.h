@interface IESForestPreloadConfig : NSObject
@property (nonatomic) NSString mainUrl;
@property (nonatomic) Q renderType;
@property (nonatomic) NSDictionary subResources;
- (id)mainUrl;
- (unsigned long long)renderType;
- (void)setMainUrl:;
- (void)setSubResources:;
- (id)subResourceConfigs;
- (id)subResources;
- (void)setRenderType:;
- (void).cxx_destruct;
+ (id)configWithDictionary:andMainUrl:;
+ (id)preloadOrderedTypes;
+ (unsigned long long)renderTypeWithStringType:;
+ (id)subResourcesWithDictionary:;
@end
