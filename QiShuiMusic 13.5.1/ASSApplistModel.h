@interface ASSApplistModel : NSObject
+ (void)clearSetting;
+ (id)getAppSchemeList;
+ (id)getAppSchemeVersion;
+ (void)initializeSettings;
+ (BOOL)isInRequest;
+ (void)saveSetting;
+ (void)setAppSchemeList:;
+ (void)setAppSchemeVersion:;
+ (void)setInRequest:;
@end
