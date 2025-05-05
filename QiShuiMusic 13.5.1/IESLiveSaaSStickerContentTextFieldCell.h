@interface IESLiveSaaSStickerContentTextFieldCell : UICollectionViewCell
@property (nonatomic) IESLiveSaaSStickerViewModel viewModel;
@property (nonatomic) UITextField textField;
@property (nonatomic) q maxLength;
@property (nonatomic) UILabel wordCountLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindAction;
- (void)configWithViewModel:;
- (void)setWordCountLabel:;
- (void)updateWordCountLabel;
- (id)wordCountLabel;
- (id)viewModel;
- (id)textField;
- (long long)maxLength;
- (void)setTextField:;
- (void)setMaxLength:;
- (id)initWithFrame:;
- (void)setup;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (id)identifier;
@end
