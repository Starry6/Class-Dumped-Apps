@interface AWEUniversalCleanHeaderView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel cleanSizeLabel;
@property (nonatomic) UILabel percentLabel;
@property (nonatomic) float cleneSize;
@property (nonatomic) NSString percentDesc;
@property (nonatomic) q progress;
- (void)setPercentLabel:;
- (id)percentLabel;
- (void)setCleneSize:;
- (void)setPercentDesc:;
- (float)cleneSize;
- (id)cleanSizeLabel;
- (id)percentDesc;
- (void)setCleanSizeLabel:;
- (id)initWithFrame:;
- (void)setup;
- (long long)progress;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setProgress:;
@end
