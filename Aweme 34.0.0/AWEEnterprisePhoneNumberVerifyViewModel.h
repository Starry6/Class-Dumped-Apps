@interface AWEEnterprisePhoneNumberVerifyViewModel : AWEEnterpriseIMMessageCustomerBaseViewModel
@property (nonatomic) AWEEnterprisePhoneNumberVerifyModel model;
@property (nonatomic) NSString currentPhoneNumber;
@property (nonatomic) {CGSize=dd} contentSize;
- (void)configDataWithContent:ext:localExt:;
- (void)updateWithExt:;
- (void)updateWithModel:localExt:syncExt:;
- (void)p_updateWithExt:;
- (void)getPhoneNumberWithCompleteBlock:;
- (void)getVerifyCodeWithPhone:messageInfo:completeBlock:;
- (void)submitWithPhone:code:messageInfo:completeBlock:;
- (id)currentPhoneNumber;
- (void)setCurrentPhoneNumber:;
- (void)setModel:;
- (void)setContentSize:;
- (id)contentSize;
- (id)model;
- (void).cxx_destruct;
@end
