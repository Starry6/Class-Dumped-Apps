@interface AWEUserComplexIconWithDescView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) NSMutableArray iconViewArray;
@property (nonatomic) NSArray modelArray;
@property (nonatomic) double spacing;
@property (nonatomic) {CGSize=dd} iconSize;
- (void)setModelArray:;
- (id)modelArray;
- (void)setupSubview;
- (void)setIconViewArray:;
- (id)iconViewArray;
- (double)spacing;
- (void)setSpacing:;
- (id)stackView;
- (void)setStackView:;
- (void)setIconSize:;
- (id)initWithFrame:;
- (id)iconSize;
- (void).cxx_destruct;
@end
