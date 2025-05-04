@interface AWEUserButtonComponent : NSObject
@property (nonatomic) AWEUserLoginButtonView buttonView;
@property (nonatomic) BOOL buttonClicked;
@property (nonatomic) BOOL needAutoClick;
@property (nonatomic) q status;
@property (nonatomic) NSString buttonText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)buttonClicked;
- (void)buttonStatusChanged:;
- (void)setButtonClicked:;
- (void)setNeedAutoClick:;
- (BOOL)needAutoClick;
- (void)setupComponentView;
- (void)updateAutoClick:;
- (void)startLoading;
- (void)setStatus:;
- (void)stopLoading;
- (id)buttonView;
- (unsigned long long)componentType;
- (id)buttonText;
- (void).cxx_destruct;
- (long long)status;
- (void)setButtonView:;
- (id)componentView;
- (void)setButtonText:;
@end
