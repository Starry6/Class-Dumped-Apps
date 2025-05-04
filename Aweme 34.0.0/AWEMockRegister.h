@interface AWEMockRegister : NSObject
+ (void)registerStringMockWithName:settingKey:defaultValue:stable:mockBlock:;
+ (void)registerBoolMockWithName:settingKey:defaultValue:stable:mockBlock:;
+ (void)registerEnumMockWithName:settingKey:defaultValue:stable:mockBlock:;
+ (void)registerNumberMockWithName:settingKey:defaultValue:stable:mockBlock:;
+ (void)registerNewSettingsMockWithName:settingKey:defaultValue:stable:mockBlock:;
@end
