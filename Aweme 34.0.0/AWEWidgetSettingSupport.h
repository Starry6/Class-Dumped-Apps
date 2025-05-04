@interface AWEWidgetSettingSupport : NSObject
@property (nonatomic) NSLock settingLock;
- (id)getWidgetSettingsDictionary;
- (void)setWidgetSettingWithValue:forKey:;
- (void)removeWidgetSettingWithKey:;
- (void)setSettingLock:;
- (id)settingLock;
- (void).cxx_destruct;
+ (id)getCommonDictionary;
+ (void)setCommonDictionaryWithValue:forKey:;
+ (void)setUserDefaultWithValue:forKey:;
+ (id)getWidgetLogArray;
+ (void)clearWidgetLogArray;
+ (void)widgetLogReport;
+ (void)updateWidgetSettings;
+ (id)sharedInstance;
@end
