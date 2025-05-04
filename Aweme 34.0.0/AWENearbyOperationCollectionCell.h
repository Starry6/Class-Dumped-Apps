@interface AWENearbyOperationCollectionCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) BOOL isInFeedContainer;
@property (nonatomic) BOOL shouldOptimizeUI;
- (void)p_setupUI;
- (id)coverImageView;
- (void)setCoverImageView:;
- (BOOL)shouldOptimizeUI;
- (void)setShouldOptimizeUI:;
- (BOOL)isInFeedContainer;
- (void)setIsInFeedContainer:;
- (void)configurationWithModel:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)descriptionLabel;
+ (id)p_descriptionWithModel:;
+ (double)cellHeightForWidth:model:shouldOptimizeNearbyUI:;
+ (BOOL)p_shouldShowDesc;
+ (double)p_descInsetH;
+ (double)p_descLineSpacing;
@end
