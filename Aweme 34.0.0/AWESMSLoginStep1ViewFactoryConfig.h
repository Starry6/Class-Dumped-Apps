@interface AWESMSLoginStep1ViewFactoryConfig : NSObject
@property (nonatomic) AWEUserContext context;
@property (nonatomic) NSString loginTitle;
@property (nonatomic) NSString loginButtonTitle;
@property (nonatomic) DYPhoneNumberModel phoneContext;
@property (nonatomic) q protocolOffset;
@property (nonatomic) AWELoginButtonTagModel tagModel;
- (id)loginButtonTitle;
- (void)setLoginButtonTitle:;
- (void)setTagModel:;
- (id)tagModel;
- (id)phoneContext;
- (void)setPhoneContext:;
- (id)loginTitle;
- (long long)protocolOffset;
- (void)setLoginTitle:;
- (void)setProtocolOffset:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
