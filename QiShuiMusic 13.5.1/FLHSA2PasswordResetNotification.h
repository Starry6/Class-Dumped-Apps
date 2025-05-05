@interface FLHSA2PasswordResetNotification : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString informativeText;
@property (nonatomic) NSString approveButtonTitle;
@property (nonatomic) NSString dismissButtonTitle;
@property (nonatomic) NSString appleID;
- (id)informativeText;
- (id)appleID;
- (void)setInformativeText:;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setAppleID:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (void)setDismissButtonTitle:;
- (id)dismissButtonTitle;
- (id)initWithFollowUpItemUserInfo:;
- (id)followUpItemUserInfo;
- (id)approveButtonTitle;
- (void)setApproveButtonTitle:;
+ (BOOL)supportsSecureCoding;
@end
