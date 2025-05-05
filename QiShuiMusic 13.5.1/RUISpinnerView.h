@interface RUISpinnerView : RUIElement
@property (nonatomic) RUIObjectModel objectModel;
@property (nonatomic) UIColor spinnerColor;
@property (nonatomic) RUIHeaderElement header;
@property (nonatomic) RUIFooterElement footer;
- (void)setHeader:;
- (void)viewWillDisappear:;
- (void)setFooter:;
- (void).cxx_destruct;
- (id)footer;
- (void)viewWillAppear:;
- (id)header;
- (void)setSpinnerColor:;
- (id)spinnerView;
- (id)objectModel;
- (id)spinnerColor;
- (void)setObjectModel:;
- (void)viewDidLayout;
@end
