@interface TTASNSSDKAuthCallbackModel : TTAUserModel
@property (nonatomic) NSString auth_token;
@property (nonatomic) NSString dialog_tips;
@property (nonatomic) NSString sec_info;
- (void)setDialog_tips:;
- (id)auth_token;
- (id)dialog_tips;
- (void)setAuth_token:;
- (void).cxx_destruct;
+ (id)tta_modelCustomPropertyMapper;
@end
