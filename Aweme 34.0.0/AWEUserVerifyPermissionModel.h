@interface AWEUserVerifyPermissionModel : AWEBaseApiModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString verificationName;
@property (nonatomic) NSString toastMessage;
@property (nonatomic) NSString toastURL;
@property (nonatomic) q verifyNum;
- (id)toastMessage;
- (void)setToastMessage:;
- (id)verificationName;
- (void)setVerificationName:;
- (id)toastURL;
- (void)setToastURL:;
- (long long)verifyNum;
- (void)setVerifyNum:;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
