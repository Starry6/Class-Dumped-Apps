@interface AWEUserVerificationCodeComponent : NSObject
@property (nonatomic) AWEUserLoginInputModel inputModel;
@property (nonatomic) AWEUserLoginInputView inputView;
@property (nonatomic) NSString code;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupComponentView;
- (id)code;
- (void)setCode:;
- (void)setInputView:;
- (unsigned long long)componentType;
- (void).cxx_destruct;
- (id)inputView;
- (id)componentView;
- (id)inputModel;
- (void)setInputModel:;
@end
