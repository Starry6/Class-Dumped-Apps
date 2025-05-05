@interface PSWiFiSettingsDetail : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)setEnabled:;
+ (id)preferencesURL;
+ (id)iconImage;
+ (BOOL)isEnabled;
@end
