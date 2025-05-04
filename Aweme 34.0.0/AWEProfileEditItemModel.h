@interface AWEProfileEditItemModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) NSString placeholder;
@property (nonatomic) NSString detail;
@property (nonatomic) NSString key;
@property (nonatomic) AWEProfileEditViewModel viewModel;
@property (nonatomic) NSString rightIcon;
- (void)setRightIcon:;
- (id)initWithType:viewModel:;
- (void)setType:viewModel:;
- (void)setKey:;
- (id)attributedText;
- (id)viewModel;
- (void)setPlaceholder:;
- (void)setDetail:;
- (id)key;
- (long long)type;
- (void)setAttributedText:;
- (void)setType:;
- (id)detail;
- (void)setViewModel:;
- (id)placeholder;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)rightIcon;
@end
