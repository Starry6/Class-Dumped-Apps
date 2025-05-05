@interface IESECLiveDynamicUIContext : NSObject
@property (nonatomic) Q dynamicType;
@property (nonatomic) NSString templateURL;
@property (nonatomic) NSString regionParams;
@property (nonatomic) q regionBusinessType;
@property (nonatomic) NSDictionary localExtraParams;
@property (nonatomic) NSString regionName;
- (void)setDynamicType:;
- (unsigned long long)dynamicType;
- (id)localExtraParams;
- (long long)regionBusinessType;
- (id)regionParams;
- (void)setLocalExtraParams:;
- (void)setRegionBusinessType:;
- (void)setRegionParams:;
- (id)templateURL;
- (void).cxx_destruct;
- (BOOL)isEqualToContext:;
- (void)setTemplateURL:;
- (id)regionName;
- (void)setRegionName:;
@end
