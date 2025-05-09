@interface CJPayFaceVerifyInfo : JSONModel
@property (nonatomic) NSString verifyType;
@property (nonatomic) NSString faceContent;
@property (nonatomic) NSString agreementURL;
@property (nonatomic) NSString agreementDesc;
@property (nonatomic) NSString nameMask;
@property (nonatomic) NSString verifyChannel;
@property (nonatomic) NSString style;
@property (nonatomic) NSString buttonDesc;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString faceScene;
@property (nonatomic) BOOL skipCheckAgreement;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString merchantId;
- (id)iconUrl;
- (void)setFaceContent:;
- (id)agreementDesc;
- (id)agreementURL;
- (id)buttonDesc;
- (id)faceContent;
- (id)faceScene;
- (id)nameMask;
- (void)setAgreementDesc:;
- (void)setAgreementURL:;
- (void)setButtonDesc:;
- (void)setFaceScene:;
- (void)setIconUrl:;
- (void)setNameMask:;
- (void)setSkipCheckAgreement:;
- (void)setVerifyChannel:;
- (BOOL)skipCheckAgreement;
- (id)verifyChannel;
- (id)appId;
- (void)setStyle:;
- (void)setTitle:;
- (void)setAppId:;
- (id)title;
- (void).cxx_destruct;
- (id)style;
- (id)merchantId;
- (void)setMerchantId:;
- (id)verifyType;
- (void)setVerifyType:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
