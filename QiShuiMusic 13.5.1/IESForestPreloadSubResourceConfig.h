@interface IESForestPreloadSubResourceConfig : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) BOOL enableMemory;
@property (nonatomic) Q resourceType;
@property (nonatomic) Q renderType;
- (BOOL)enableMemory;
- (unsigned long long)renderType;
- (long long)resourceScene;
- (void)setEnableMemory:;
- (id)url;
- (unsigned long long)resourceType;
- (void)setResourceType:;
- (void)setUrl:;
- (void)setRenderType:;
- (void).cxx_destruct;
+ (id)configWithDictionary:andResourceType:andRenderType:;
+ (unsigned long long)resourceTypeWithStringType:;
@end
