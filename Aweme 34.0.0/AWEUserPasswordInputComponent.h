@interface AWEUserPasswordInputComponent : NSObject
@property (nonatomic) NSString inputPassword;
@property (nonatomic) AWEUserLoginInputView passwordView;
@property (nonatomic) AWEUserLoginInputModel inputModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearInputText;
- (void)setPasswordView:;
- (id)inputPassword;
- (void)setInputPassword:;
- (void)setupComponentView;
- (unsigned long long)componentType;
- (void).cxx_destruct;
- (id)componentView;
- (id)inputModel;
- (void)setInputModel:;
- (id)passwordView;
@end
