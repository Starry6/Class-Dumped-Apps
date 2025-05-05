@interface APRiskConfigCenter : NSObject
+ (int)configIntValue:;
+ (id)configStringValue:defaultValue:;
+ (BOOL)configBoolValue:;
+ (BOOL)configBoolValue:defaultValue:;
+ (id)configDictValue:;
+ (id)configDictValue:defaultValue:;
+ (double)configDoubleValue:;
+ (int)configIntValue:defaultValue:;
+ (int)configIntValueDefaultOn:;
+ (id)configStringValue:;
+ (BOOL)configStringValueIsTrue:;
+ (int)getDynamicDetectSwitchConfig;
+ (int)getDynamicDetectV3SwitchConfig;
@end
