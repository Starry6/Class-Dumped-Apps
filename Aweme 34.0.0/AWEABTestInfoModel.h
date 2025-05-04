@interface AWEABTestInfoModel : AWESettingsDebugMetaData
@property (nonatomic) NSArray serverTestCaseDataArray;
@property (nonatomic) NSArray testCaseMessages;
@property (nonatomic) Q propertyType;
@property (nonatomic) NSString serverString;
- (id)testCaseMessages;
- (void)setTestCaseMessages:;
- (void)configBoolWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
- (void)configEnumWithPropertyName:serverString:serverTestCaseDataArray:defaultValue:title:testCaseMessages:description:author:PMs:appVersion:linesOfBusiness:modules:;
- (void)configNumberWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
- (void)configStringWithPropertyName:serverString:defaultValue:title:description:author:PMs:appVersion:linesOfBusiness:modules:;
- (void)setMockEnums:;
- (id)serverString;
- (id)serverTestCaseDataArray;
- (void)setServerTestCaseDataArray:;
- (void)configBoolWithPropertyName:serverString:defaultValue:title:;
- (void)configEnumWithPropertyName:serverString:serverTestCaseDataArray:defaultValue:title:testCaseMessages:;
- (void)configNumberWithPropertyName:serverString:defaultValue:title:;
- (void)configStringWithPropertyName:serverString:defaultValue:title:;
- (id)ownersWithAuthor:pms:;
- (unsigned long long)propertyType;
- (id)init;
- (void).cxx_destruct;
- (void)setPropertyType:;
@end
