@interface AWEIMShareGoodsListMessageProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? didClickSubmitBlock;
@property (nonatomic) @? loadDurationBlock;
@property (nonatomic) AWEEnterpriseIMMessageCardBaseViewModel enterpriseViewModel;
@property (nonatomic) UIColor BGColor;
- (id)didClickSubmitBlock;
- (id)loadDurationBlock;
- (void)setDidClickSubmitBlock:;
- (void)setLoadDurationBlock:;
- (void)setBGColor:;
- (id)BGColor;
- (void)setEnterpriseViewModel:;
- (id)enterpriseViewModel;
- (void).cxx_destruct;
@end
