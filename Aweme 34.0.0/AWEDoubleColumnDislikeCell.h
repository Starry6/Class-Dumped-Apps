@interface AWEDoubleColumnDislikeCell : UICollectionViewCell
@property (nonatomic) @? feedbackBlock;
@property (nonatomic) AWEDoubleColumnDislikeCellConfig config;
@property (nonatomic) UIButton itemButton;
@property (nonatomic) AWEDoubleColumnDislikeViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithFrame:config:;
- (void)setupDefaultConfig:;
- (id)feedbackBlock;
- (void)itemButtonPressed:;
- (void)configWithTitle:;
- (void)setFeedbackBlock:;
- (void)setConfig:;
- (id)init;
- (void)prepareForReuse;
- (void)updateWithConfig:;
- (id)config;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)itemButton;
- (void)setItemButton:;
- (void)willDisplay;
+ (id)reuseIdentifier;
@end
