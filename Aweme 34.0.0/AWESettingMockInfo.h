@interface AWESettingMockInfo : NSObject
@property (nonatomic) AWESettingsMockEnumArray mockEnums;
@property (nonatomic) AWESettingsMockEnumArray mockEnums;
@property (nonatomic) NSString title;
@property (nonatomic) NSString detail;
@property (nonatomic) NSArray owners;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSArray linesOfBusiness;
@property (nonatomic) NSArray modules;
- (id)linesOfBusiness;
- (void)setLinesOfBusiness:;
- (void)addTestCase:caseMessage:;
- (id)mockEnums;
- (id)mockEnums;
- (void)setMockEnums:;
- (void)addEnumWithData:description:;
- (id)init;
- (id)appVersion;
- (void)setDetail:;
- (void)setAppVersion:;
- (id)modules;
- (void)setModules:;
- (id)detail;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)owners;
- (void)setOwners:;
@end
