@interface AWESMSLoginStep1ViewModel : NSObject
@property (nonatomic) NSString loginTitle;
@property (nonatomic) NSString loginButtonTitle;
@property (nonatomic) DYPhoneNumberModel phoneContext;
@property (nonatomic) q protocolOffset;
@property (nonatomic) AWELoginButtonTagModel tagModel;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) BOOL isFromPrivacyPanel;
- (id)loginButtonTitle;
- (void)setLoginButtonTitle:;
- (void)setTagModel:;
- (id)tagModel;
- (id)phoneContext;
- (void)setPhoneContext:;
- (BOOL)isFromPrivacyPanel;
- (void)setIsFromPrivacyPanel:;
- (id)loginTitle;
- (long long)protocolOffset;
- (void)setLoginTitle:;
- (void)setProtocolOffset:;
- (void).cxx_destruct;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
