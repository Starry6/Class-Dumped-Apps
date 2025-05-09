@interface FLHSA2LoginNotification : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString informativeText;
@property (nonatomic) NSString codePrompt;
@property (nonatomic) NSString footerText;
@property (nonatomic) NSString approveButtonTitle;
@property (nonatomic) NSString dismissButtonTitle;
@property (nonatomic) NSSet supportedDismissActions;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSNumber longitude;
@property (nonatomic) NSNumber latitude;
@property (nonatomic) NSString deviceType;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSString deviceColorString;
@property (nonatomic) NSString pushMessageID;
@property (nonatomic) BOOL userAllowedSignIn;
- (id)deviceType;
- (id)deviceModel;
- (id)informativeText;
- (id)appleID;
- (void)setInformativeText:;
- (void)setDeviceType:;
- (void)setFooterText:;
- (void)setAltDSID:;
- (id)altDSID;
- (id)latitude;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)footerText;
- (void)setAppleID:;
- (void)setLatitude:;
- (void)encodeWithCoder:;
- (id)title;
- (void)setLongitude:;
- (void).cxx_destruct;
- (id)longitude;
- (void)setDeviceModel:;
- (void)setDismissButtonTitle:;
- (id)dismissButtonTitle;
- (id)initWithFollowUpItemUserInfo:;
- (id)followUpItemUserInfo;
- (id)codePrompt;
- (void)setCodePrompt:;
- (id)approveButtonTitle;
- (void)setApproveButtonTitle:;
- (id)supportedDismissActions;
- (void)setSupportedDismissActions:;
- (id)deviceColorString;
- (void)setDeviceColorString:;
- (id)pushMessageID;
- (void)setPushMessageID:;
- (BOOL)userAllowedSignIn;
- (void)setUserAllowedSignIn:;
+ (BOOL)supportsSecureCoding;
@end
