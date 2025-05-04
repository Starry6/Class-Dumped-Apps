@interface AWECarrierLoginViewFactoryConfig : NSObject
@property (nonatomic) AWEUserContext context;
@property (nonatomic) NSString loginTitle;
@property (nonatomic) NSString loginButtonTitle;
@property (nonatomic) DYPhoneNumberModel phoneNumber;
@property (nonatomic) q carrierType;
@property (nonatomic) q protocolOffset;
@property (nonatomic) AWELoginButtonTagModel tagModel;
- (void)setCarrierType:;
- (long long)carrierType;
- (id)loginButtonTitle;
- (void)setLoginButtonTitle:;
- (void)setTagModel:;
- (id)tagModel;
- (id)loginTitle;
- (long long)protocolOffset;
- (void)setLoginTitle:;
- (void)setProtocolOffset:;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
