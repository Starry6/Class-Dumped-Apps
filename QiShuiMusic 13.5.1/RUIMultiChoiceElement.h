@interface RUIMultiChoiceElement : RUIElement
@property (nonatomic) RUIMultiChoiceView view;
@property (nonatomic) RUIObjectModel objectModel;
@property (nonatomic) BOOL floatsAboveKeyboard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sourceURL;
- (id)view;
- (id)viewControllerForPresentation;
- (void).cxx_destruct;
- (void)setView:;
- (id)viewForElementIdentifier:;
- (id)objectModel;
- (id)initWithAttributes:parent:;
- (void)setObjectModel:;
- (void)didTapChoice:;
- (void)didTapFooter:;
- (void)addChoice:;
- (double)estimatedViewHeight;
- (void)startActivityIndicatorForChoice:;
- (void)stopActivityIndicatorForChoice:;
- (void)didUpdateTitleForChoice:;
- (void)setChoice:enabled:;
- (BOOL)floatsAboveKeyboard;
- (void)pageDidChange;
- (id)subElementWithID:;
@end
