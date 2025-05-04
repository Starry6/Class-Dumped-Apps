@interface AWEECOMIMCardComponentMultiLabelView : UIView
@property (nonatomic) NSMutableArray labels;
@property (nonatomic) UIStackView stackView;
- (void)setDesLabelCount:;
- (id)createNewDesLabel;
- (id)labels;
- (id)stackView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateWithData:;
+ (double)designHeight;
+ (unsigned long long)maxLine;
+ (double)designHeightWithData:width:;
+ (double)lineHeight;
@end
