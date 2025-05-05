@interface NSNotification : NSObject
@property (nonatomic) MRPlayerPath playerPath;
@property (nonatomic) BOOL _sf_perSitePreferenceNotificationWasSentFromAnotherProcess;
@property (nonatomic) NSString name;
@property (nonatomic) @ object;
@property (nonatomic) NSDictionary userInfo;
- (id)playerPath;
- (BOOL)cal_changeMayAffectAnyObjectOfType:;
- (BOOL)cal_changeMayAffectCalendarsOrSources;
- (BOOL)_sf_perSitePreferenceNotificationWasSentFromAnotherProcess;
- (id)init;
- (id)replacementObjectForPortCoder:;
- (id)userInfo;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithName:object:userInfo:;
- (id)object;
- (id)description;
- (Class)classForCoder;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)notificationWithName:object:;
+ (id)notificationWithName:object:userInfo:;
@end
