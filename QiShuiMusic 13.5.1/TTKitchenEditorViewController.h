@interface TTKitchenEditorViewController : UIViewController
@property (nonatomic) TTKitchenModel kitchenModel;
@property (nonatomic) UILabel keyLabel;
@property (nonatomic) UITextView valueTextView;
- (void)setActionFired:;
- (id)initWithKitchenModel:;
- (id)kitchenModel;
- (void)refreshValueTextView:;
- (void)setKitchenModel:;
- (void)setValueTextView:;
- (id)valueTextView;
- (void)close:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)keyLabel;
- (void)setKeyLabel:;
@end
