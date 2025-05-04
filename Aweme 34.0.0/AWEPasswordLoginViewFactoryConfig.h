@interface AWEPasswordLoginViewFactoryConfig : NSObject
@property (nonatomic) AWEUserContext context;
@property (nonatomic) NSString loginTitle;
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
- (void)setChangeLoginWayTitle:;
- (void)setLoginStyle:;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
