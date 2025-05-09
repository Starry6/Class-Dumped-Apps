@interface AWEUGWidgetSupporter : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) NSArray lastInstalledList;
@property (nonatomic) NSDictionary lastShortcutInstalledList;
@property (nonatomic) NSDate lastFullyReportDate;
@property (nonatomic) NSDictionary widgetKindToTypeMap;
@property (nonatomic) NSDictionary widgetSizeMap;
@property (nonatomic) NSDictionary widgetTypeToKindMap;
@property (nonatomic) NSDictionary theNewWidgetKindToTypeMap;
@property (nonatomic) NSDictionary theNewWidgetTypeToKindMap;
@property (nonatomic) NSDictionary widgetNameSuffixMap;
- (id)widgetKindFromWidgetType:;
- (void)setMmkv:;
- (id)mmkv;
- (id)widgetTypeFromWidgetKind:;
- (id)lastShortcutInstalledList;
- (void)setLastShortcutInstalledList:;
- (id)lastFullyReportDate;
- (id)lastInstalledList;
- (void)setLastFullyReportDate:;
- (id)widgetKindToTypeMap;
- (id)widgetSizeMap;
- (void)p_trackInstallationChangeOfWidget:isInstallation:;
- (void)fullyReportWidgetInstallationStatusIfNeeded:;
- (void)reportWidgetsInstallationChangeIfNeeded:;
- (void)setLastInstalledList:;
- (id)theNewWidgetKindToTypeMap;
- (id)widgetNameSuffixMap;
- (id)theNewWidgetTypeToKindMap;
- (id)widgetTypeToKindMap;
- (void)reportWidgetsInstallationInfo;
- (void)setWidgetKindToTypeMap:;
- (void)setWidgetSizeMap:;
- (void)setWidgetTypeToKindMap:;
- (void)setTheNewWidgetKindToTypeMap:;
- (void)setTheNewWidgetTypeToKindMap:;
- (void)setWidgetNameSuffixMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
