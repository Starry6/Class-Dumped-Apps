@interface RUIAlertView : RUIElement
@property (nonatomic) UIColor tintColor;
@property (nonatomic) @? completion;
@property (nonatomic) RUIObjectModel<RUIAlertViewDelegate> objectModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString message;
@property (nonatomic) q buttonIndex;
- (id)completion;
- (void)setCompletion:;
- (void)dealloc;
- (void)setMessage:;
- (id)tintColor;
- (void)setTitle:;
- (void)_dismissAlertController;
- (id)title;
- (id)message;
- (void).cxx_destruct;
- (void)setTintColor:;
- (id)alertController;
- (long long)buttonIndex;
- (id)objectModel;
- (id)initWithAttributes:parent:;
- (void)setObjectModel:;
- (void)addButtonWithTitle:URL:style:attributes:;
- (void)runAlertInController:completion:;
+ (void)_enableTestMode;
@end
