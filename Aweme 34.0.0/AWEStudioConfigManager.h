@interface AWEStudioConfigManager : NSObject
@property (nonatomic) NSMutableDictionary getterDict;
- (void)registerStringABTestCaseWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
- (void)registerBoolABTestCaseWithPropertyName:serverString:defaultValue:title:;
- (void)registerBoolABTestCaseWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
- (void)registerEnumABTestCaseWithPropertyName:serverString:serverTestCaseDataArray:defaultValue:title:testCaseMessages:;
- (void)registerEnumABTestCaseWithPropertyName:serverString:serverTestCaseDataArray:defaultValue:title:testCaseMessages:description:author:PMs:appVersion:linesOfBusiness:modules:;
- (void)registerNumberABTestCaseWithPropertyName:serverString:defaultValue:title:;
- (void)registerNumberABTestCaseWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
- (void)registerNumberABTestCaseWithPropertyName:serverString:defaultValue:;
- (void)setGetter:forKey:;
- (id)getterForKey:;
- (id)getterDict;
- (void)setGetterDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
