@interface AWEPasswordLoginViewModel : NSObject
@property (nonatomic) NSString loginTitle;
@property (nonatomic) NSString loginSubTitle;
@property (nonatomic) NSString loginButtonTitle;
@property (nonatomic) DYPhoneNumberModel phoneNumber;
@property (nonatomic) NSString changeLoginWayTitle;
@property (nonatomic) q loginStyle;
@property (nonatomic) q protocolOffset;
@property (nonatomic) AWELoginButtonTagModel tagModel;
- (id)loginButtonTitle;
- (void)setLoginButtonTitle:;
- (void)setTagModel:;
- (id)tagModel;
- (long long)loginStyle;
- (id)loginTitle;
- (long long)protocolOffset;
- (void)setLoginTitle:;
- (void)setProtocolOffset:;
- (id)changeLoginWayTitle;
- (id)loginSubTitle;
- (void)setLoginSubTitle:;
- (void)setChangeLoginWayTitle:;
- (void)setLoginStyle:;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void).cxx_destruct;
@end
