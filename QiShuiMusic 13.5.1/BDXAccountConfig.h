@interface BDXAccountConfig : NSObject
@property (nonatomic) BOOL shouldDisplayAppIconOnLoginPage;
@property (nonatomic) NSString configPlistPath;
@property (nonatomic) NSString areaCodePlistPath;
@property (nonatomic) BOOL autoPreGetMaskPhoneNumber;
@property (nonatomic) @ ttaccountSetup;
- (id)configPlistPath;
- (BOOL)shouldDisplayAppIconOnLoginPage;
- (id)areaCodePlistPath;
- (BOOL)autoPreGetMaskPhoneNumber;
- (void)setAreaCodePlistPath:;
- (void)setAutoPreGetMaskPhoneNumber:;
- (void)setConfigPlistPath:;
- (void)setShouldDisplayAppIconOnLoginPage:;
- (void)setTtaccountSetup:;
- (id)ttaccountSetup;
- (id)init;
- (void).cxx_destruct;
@end
