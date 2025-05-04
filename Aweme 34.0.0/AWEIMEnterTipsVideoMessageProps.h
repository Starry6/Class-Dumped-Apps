@interface AWEIMEnterTipsVideoMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) AWEEnterpriseIMMessageCardBaseViewModel enterpriseViewModel;
@property (nonatomic) UIColor enterpriseCardViewBGColor;
@property (nonatomic) @? tapAction;
- (void)setEnterpriseViewModel:;
- (id)enterpriseViewModel;
- (void)setEnterpriseCardViewBGColor:;
- (id)enterpriseCardViewBGColor;
- (void).cxx_destruct;
- (id)tapAction;
- (void)setTapAction:;
@end
