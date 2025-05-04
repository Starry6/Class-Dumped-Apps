@interface AWETaskTrialProductView : UIView
@property (nonatomic) UIImageView productImageView;
@property (nonatomic) UILabel productIndroductionLabel;
@property (nonatomic) NSMutableArray productAdvatageLabels;
- (void)updateWithChallenge:;
- (void)setupSubView;
- (id)productIndroductionLabel;
- (id)productAdvatageLabels;
- (void)setupSubViewConstraints;
- (id)generateProductAdvantageLabel;
- (void)setProductIndroductionLabel:;
- (void)setProductAdvatageLabels:;
- (id)init;
- (void).cxx_destruct;
- (id)productImageView;
- (void)setProductImageView:;
@end
