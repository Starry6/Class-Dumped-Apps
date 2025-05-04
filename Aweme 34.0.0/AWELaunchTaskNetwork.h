@interface AWELaunchTaskNetwork : NSObject
- (id)aAWEInfraConfigModuleServiceJXAdapter;
- (id)aAWEInfraConfigModuleServiceSSAdapter;
- (id)aAWEInfraConfigModuleServiceLGAdapter;
+ (id)whiteURLs;
+ (Class)aAWEInfraConfigModuleServiceJXAdapterClass;
+ (Class)aAWEInfraConfigModuleServiceSSAdapterClass;
+ (Class)aAWEInfraConfigModuleServiceLGAdapterClass;
+ (void)execute;
@end
