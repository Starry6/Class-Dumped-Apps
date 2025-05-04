@interface AWEABTestInfoManager : NSObject
@property (nonatomic) NSMutableDictionary propertyInfoDic;
- (id)propertyInfoDic;
- (void)saveABTestInfoModel:propertyName:;
- (void)setPropertyInfoDic:;
- (id)init;
- (void).cxx_destruct;
+ (id)downgrande_info;
+ (void)registerStringABTestCaseWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
+ (void)registerBoolABTestCaseWithPropertyName:serverString:defaultValue:title:;
+ (void)registerBoolABTestCaseWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
+ (void)debugOverride_didRegisterWithPropertyName:;
+ (void)registerEnumABTestCaseWithPropertyName:serverString:serverTestCaseDataArray:defaultValue:title:testCaseMessages:;
+ (void)registerEnumABTestCaseWithPropertyName:serverString:serverTestCaseDataArray:defaultValue:title:testCaseMessages:description:author:PMs:appVersion:linesOfBusiness:modules:;
+ (void)registerNumberABTestCaseWithPropertyName:serverString:defaultValue:title:;
+ (void)registerNumberABTestCaseWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
+ (id)abTestInfoModelWithPropertyName:;
+ (id)allABTestPropertyList;
+ (id)allABTestInfoModels;
+ (void)registerBoolABTestCaseWithPropertyName:serverString:defaultValue:;
+ (void)registerEnumABTestCaseWithPropertyName:serverString:serverTestCaseDataArray:defaultValue:;
+ (void)registerNumberABTestCaseWithPropertyName:serverString:defaultValue:;
+ (void)registerStringABTestCaseWithPropertyName:serverString:defaultValue:;
+ (id)sharedManager;
@end
