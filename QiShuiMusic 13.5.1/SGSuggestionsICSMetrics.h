@interface SGSuggestionsICSMetrics : NSObject
@property (nonatomic) SGMFoundInAppsICS foundInAppsICS;
- (id)init;
- (void).cxx_destruct;
- (id)foundInAppsICS;
- (void)setFoundInAppsICS:;
+ (id)instance;
+ (void)recordWithTimezoneValue:datetimeType:;
@end
