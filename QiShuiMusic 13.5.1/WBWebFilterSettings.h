@interface WBWebFilterSettings : NSObject
@property (nonatomic) WFUserSettings userSettings;
@property (nonatomic) BOOL webFilterEnabled;
@property (nonatomic) BOOL usesAllowedSitesOnly;
- (id)init;
- (void)dealloc;
- (void)reloadSettings;
- (BOOL)isWebFilterEnabled;
- (BOOL)usesAllowedSitesOnly;
- (void).cxx_destruct;
- (id)userSettings;
+ (id)sharedWebFilterSettings;
@end
