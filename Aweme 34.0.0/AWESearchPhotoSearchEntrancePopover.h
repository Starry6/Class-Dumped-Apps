@interface AWESearchPhotoSearchEntrancePopover : DUXPopover
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWESearchPhotoSearchEntranceConfig config;
- (void)refactorUIStyleWithConfig:;
- (void)setupEntrancePopover;
- (id)priorityTitle;
- (id)popoverPressColor;
- (BOOL)coverViewCanPenetrate;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (id)popoverColor;
@end
