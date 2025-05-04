@interface AWEProfileRemindBannerCloseConfirmAlert : NSObject
@property (nonatomic) DUXContentSheet popUpSheet;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showOnViewController:completion:;
- (void)cancelBtnAction;
- (void)confirmBtnAction;
- (void)setPopUpSheet:;
- (id)popUpSheet;
- (id)initWithTitle:subTitle:user:;
- (id)init;
- (void)setSubTitle:;
- (id)subTitle;
- (double)contentHeight;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)title;
- (void)setTitle:;
- (void)setupUI;
@end
