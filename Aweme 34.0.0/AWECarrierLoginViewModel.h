@interface AWECarrierLoginViewModel : NSObject
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
- (void).cxx_destruct;
@end
