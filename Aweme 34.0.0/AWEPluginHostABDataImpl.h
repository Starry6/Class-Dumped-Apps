@interface AWEPluginHostABDataImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)integerValueForKey:type:defaultVal:;
- (BOOL)boolValueForKey:type:defaultVal:;
- (id)dictionaryValueForKey:type:;
- (id)_getABObjectValueForKey:;
- (double)floatValueForKey:type:defaultVal:;
- (id)stringValueForKey:type:;
- (id)arrayValueForKey:type:;
- (id)queryHostExposureExperiments;
- (id)getAllSettingsWithABSDK:;
+ (id)sharedPlugin;
@end
