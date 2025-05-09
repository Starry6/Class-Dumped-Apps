@interface CBBlueLightClient : NSObject
@property (nonatomic) BOOL supported;
- (BOOL)supported;
- (id)init;
- (void)dealloc;
- (BOOL)getWarningStrength:;
- (BOOL)setStrength:commit:;
- (id)initWithClientObj:;
- (BOOL)setSchedule:;
- (void)suspendNotifications:;
- (void)setSupported:;
- (void)disableNotifications;
- (void)suspendNotifications:force:;
- (BOOL)setCCTRange:;
- (BOOL)setCCT:withPeriod:commit:;
- (BOOL)getDefaultCCTRange:;
- (BOOL)getBlueLightStatus:;
- (BOOL)getCCT:;
- (BOOL)setEnabled:;
- (BOOL)setCCT:commit:;
- (BOOL)setEnabled:withOption:;
- (void)enableNotifications;
- (BOOL)setStrength:withPeriod:commit:;
- (BOOL)parseStatusDictionary:intoStruct:;
- (BOOL)setActive:;
- (BOOL)getCCTRange:;
- (BOOL)getWarningCCT:;
- (BOOL)getStrength:;
- (void)setStatusNotificationBlock:;
- (BOOL)setMode:;
+ (BOOL)supportsBlueLightReduction;
@end
