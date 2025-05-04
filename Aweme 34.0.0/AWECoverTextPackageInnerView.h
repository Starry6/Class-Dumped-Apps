@interface AWECoverTextPackageInnerView : UIView
@property (nonatomic) NSMutableArray innerConfigViews;
@property (nonatomic) NSArray configViews;
@property (nonatomic) AWECoverTextPackage textPackageConfig;
@property (nonatomic) @? textDidChangeBlock;
- (id)configViews;
- (id)textDidChangeBlock;
- (void)setTextDidChangeBlock:;
- (id)textPackageConfig;
- (id)innerConfigViews;
- (void)setTextPackageConfig:;
- (void)setInnerConfigViews:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateBounds;
@end
