@interface CNAddressComponentTextFieldCell : NUITableViewContainerCell
@property (nonatomic) UITextField textField;
@property (nonatomic) UIImageView chevron;
@property (nonatomic) NSArray textFields;
@property (nonatomic) BOOL showsChevron;
@property (nonatomic) NSDictionary textAttributes;
- (id)initWithStyle:reuseIdentifier:;
- (id)textAttributes;
- (void)setTextAttributes:;
- (id)textField;
- (void)setTextField:;
- (void)prepareForReuse;
- (void)contentSizeCategoryDidChange:;
- (void).cxx_destruct;
- (id)textFields;
- (void)setChevron:;
- (id)chevron;
- (void)setupTextFields;
- (id)newTextField;
- (void)updateMargins;
- (void)setShowsChevron:;
- (BOOL)showsChevron;
+ (id)cellIdentifier;
+ (Class)containerViewClass;
@end
