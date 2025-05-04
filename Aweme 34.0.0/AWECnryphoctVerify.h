@interface AWECnryphoctVerify : HTSService
@property (nonatomic) AWEUIAlertView publishSecondVerifyAlertView;
@property (nonatomic) AWEUITextLoadingView loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissLoading;
- (void)showTwiceVerifyAlertView:cancelBlock:successBlock:failBlock:enterMethod:;
- (void)showTwiceVerifyAlertView:cancelBlock:goToVerifyBlock:enterMethod:;
- (void)showNewTwiceVerifyAlertView:successBlock:failBlock:enterMethod:;
- (void)dismissPublishAlertView;
- (void)showToastWithTitle:;
- (void)showLoadingWithTitle:;
- (void)setPublishSecondVerifyAlertView:;
- (id)publishSecondVerifyAlertView;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
@end
