@interface IESLiveSaaSTopAnchorAnimationView : UIView
@property (nonatomic) @? onCompletion;
@property (nonatomic) IESLiveSaaSAnimationTop20 animation;
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAnimation:diContext:;
- (void)loadSubviews;
- (void)showInView:completion:;
- (void)dismiss;
- (void)cancel;
- (void)setAnimation:;
- (void)setTitle:;
- (void)show;
- (id)animation;
- (id)title;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setAvatarImage:;
- (id)avatarImage;
- (id)onCompletion;
- (void)setOnCompletion:;
@end
