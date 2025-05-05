@interface WBSCertificateWarningPageContext : NSObject
@property (nonatomic) NSURL failingURL;
@property (nonatomic) q warningCategory;
@property (nonatomic) BOOL canGoBack;
@property (nonatomic) q numberOfDaysInvalid;
@property (nonatomic) NSString expiredCerticateDescription;
@property (nonatomic) double clockSkew;
- (BOOL)canGoBack;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initLegacyTLSWarningWithFailingURL:canGoBack:;
- (long long)warningCategory;
- (id)expiredCerticateDescription;
- (id)initWithWarningCategory:failingURL:numberOfDaysInvalid:canGoBack:clockSkew:;
- (long long)numberOfDaysInvalid;
- (double)clockSkew;
- (id)failingURL;
+ (BOOL)supportsSecureCoding;
+ (id)permanentAcceptanceConfirmationButtonTitle;
+ (id)permanentAcceptanceConfirmationTitle;
+ (long long)certificateWarningCategoryForError:trustIncludesRevokedCertificate:clockSkew:;
+ (BOOL)certificateWarningCannotBeBypassedForTrust:;
+ (long long)numberOfDaysBetweenCertificateValidityRangeAndNow:;
@end
