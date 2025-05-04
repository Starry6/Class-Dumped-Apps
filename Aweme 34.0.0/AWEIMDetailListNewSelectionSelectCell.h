@interface AWEIMDetailListNewSelectionSelectCell : AWEIMDetailListNewSelectionNormalCell
@property (nonatomic) UIStackView contentStackView;
@property (nonatomic) UIImageView selectImageView;
- (void)renderModel:context:;
- (void)setSelectImageView:;
- (id)selectImageView;
- (void).cxx_destruct;
- (id)contentStackView;
- (void)setupUI;
- (void)setContentStackView:;
- (void)setupLayout;
+ (id)itemSizeWithModel:context:;
+ (id)identifier;
@end
