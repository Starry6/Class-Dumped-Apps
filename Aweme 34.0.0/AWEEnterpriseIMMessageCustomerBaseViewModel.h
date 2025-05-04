@interface AWEEnterpriseIMMessageCustomerBaseViewModel : AWEEnterpriseIMMessageCardBaseViewModel
@property (nonatomic) AWEEnterpriseCustomerServiceModel originModel;
- (void)configDataWithContent:ext:localExt:;
- (void)updateWithExt:;
- (id)originModel;
- (void)saveLocalExt:messageId:conversationId:;
- (void)setOriginModel:;
- (void).cxx_destruct;
@end
