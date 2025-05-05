@interface IESLIveSaaSToastWrapper : NSObject
@property (nonatomic) <IESLiveSaaSToastFactory> toastFactory;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showHUD:inView:;
- (id)initWithToastFactory:;
- (void)setToastFactory:;
- (void)showCenterToast:title:message:firstActionTitle:secondActionTitle:firstActionBlock:secondActionBlock:closeBlock:;
- (void)showCenterToast:title:message:warnTitle:secondaryTitle:warnBlock:secondaryBlock:closeBlock:;
- (void)showErrorHUD:;
- (void)showHUD:;
- (void)showHUD:duration:;
- (void)showToastOnAlertWindow:;
- (void)showTopToast:;
- (id)toastFactory;
- (void)hideHUD;
- (void).cxx_destruct;
@end
